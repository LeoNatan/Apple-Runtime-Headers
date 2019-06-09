#!/bin/zsh

rm -fr iOS
rm -fr macOS
rm -fr watchOS
rm -fr tvOS

mkdir -p iOS/Frameworks
mkdir -p iOS/PrivateFrameworks
mkdir -p iOS/usr/lib

mkdir -p watchOS/Frameworks
mkdir -p watchOS/PrivateFrameworks
mkdir -p watchOS/usr/lib

mkdir -p tvOS/Frameworks
mkdir -p tvOS/PrivateFrameworks
mkdir -p tvOS/usr/lib

mkdir -p macOS/Frameworks
mkdir -p macOS/PrivateFrameworks
mkdir -p macOS/usr/lib
mkdir -p macOS/iOSSupport/Frameworks
mkdir -p macOS/iOSSupport/PrivateFrameworks

visitFrameworkOrApp() {
	FRAMEWORK="$1"
	ARCH="$2"
	BASEPATH="$3"
	
	if [[ -f "$FRAMEWORK" ]]; then
		FRAMEWORK_BASENAME="${${$(basename "$FRAMEWORK")%.*}##lib}"
	else
		FRAMEWORK_BASENAME="$(basename "$FRAMEWORK")"
	fi
		
	echo -e "\033[1;34mProcessing $FRAMEWORK\033[0m"
	./class-dump --arch "$ARCH" -H -o "$BASEPATH/$FRAMEWORK_BASENAME" "$FRAMEWORK"
		
	if [[ -d "$FRAMEWORK/Frameworks" ]]; then
		for INNER_FRAMEWORK in "${FRAMEWORK}"/Frameworks/* ; do
			visitFrameworkOrApp "$INNER_FRAMEWORK" "$ARCH" "$BASEPATH/$FRAMEWORK_BASENAME"/Frameworks
		done		
	fi
}

iOS() {
	# iOS

	for FRAMEWORK in "$(xcode-select -p)"/Platforms/iPhoneOS.platform/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/*.framework ; do
		visitFrameworkOrApp "$FRAMEWORK" x86_64 iOS/Frameworks/
	done

	for FRAMEWORK in "$(xcode-select -p)"/Platforms/iPhoneOS.platform/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/*.framework ; do
		visitFrameworkOrApp "$FRAMEWORK" x86_64 iOS/PrivateFrameworks/
	done
	
	for FRAMEWORK in "$(xcode-select -p)"/Platforms/iPhoneOS.platform/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS.simruntime/Contents/Resources/RuntimeRoot/usr/lib/*.dylib ; do
		visitFrameworkOrApp "$FRAMEWORK" x86_64 iOS/usr/lib/
	done
	
	for FRAMEWORK in "$(xcode-select -p)"/Platforms/iPhoneOS.platform/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS.simruntime/Contents/Resources/RuntimeRoot/usr/lib/system/*.dylib ; do
		visitFrameworkOrApp "$FRAMEWORK" x86_64 iOS/usr/lib/
	done
}

watchOS() {
	# watchOS
	
	for FRAMEWORK in "$(xcode-select -p)"/Platforms/WatchOS.platform/Library/Developer/CoreSimulator/Profiles/Runtimes/watchOS.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/*.framework ; do
		visitFrameworkOrApp "$FRAMEWORK" i386 watchOS/Frameworks/
	done

	for FRAMEWORK in "$(xcode-select -p)"/Platforms/WatchOS.platform/Library/Developer/CoreSimulator/Profiles/Runtimes/watchOS.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/*.framework ; do
		visitFrameworkOrApp "$FRAMEWORK" i386 watchOS/PrivateFrameworks/
	done
	
	for FRAMEWORK in "$(xcode-select -p)"/Platforms/WatchOS.platform/Library/Developer/CoreSimulator/Profiles/Runtimes/watchOS.simruntime/Contents/Resources/RuntimeRoot/usr/lib/*.dylib ; do
		visitFrameworkOrApp "$FRAMEWORK" i386 watchOS/usr/lib/
	done
	
	for FRAMEWORK in "$(xcode-select -p)"/Platforms/WatchOS.platform/Library/Developer/CoreSimulator/Profiles/Runtimes/watchOS.simruntime/Contents/Resources/RuntimeRoot/usr/lib/system/*.dylib ; do
		visitFrameworkOrApp "$FRAMEWORK" i386 watchOS/usr/lib/
	done
}

tvOS() {
	# tvOS
	
	for FRAMEWORK in "$(xcode-select -p)"/Platforms/AppleTVOS.platform/Library/Developer/CoreSimulator/Profiles/Runtimes/tvOS.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/*.framework ; do
		visitFrameworkOrApp "$FRAMEWORK" x86_64 tvOS/Frameworks/
	done

	for FRAMEWORK in "$(xcode-select -p)"/Platforms/AppleTVOS.platform/Library/Developer/CoreSimulator/Profiles/Runtimes/tvOS.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/*.framework ; do
		visitFrameworkOrApp "$FRAMEWORK" x86_64 tvOS/PrivateFrameworks/
	done
	
	for FRAMEWORK in "$(xcode-select -p)"/Platforms/AppleTVOS.platform/Library/Developer/CoreSimulator/Profiles/Runtimes/tvOS.simruntime/Contents/Resources/RuntimeRoot/usr/lib/*.dylib ; do
		visitFrameworkOrApp "$FRAMEWORK" x86_64 tvOS/usr/lib/
	done
	
	for FRAMEWORK in "$(xcode-select -p)"/Platforms/AppleTVOS.platform/Library/Developer/CoreSimulator/Profiles/Runtimes/tvOS.simruntime/Contents/Resources/RuntimeRoot/usr/lib/system/*.dylib ; do
		visitFrameworkOrApp "$FRAMEWORK" x86_64 tvOS/usr/lib/
	done
}

macOS() {
	# macOS
	
	for FRAMEWORK in /System/Library/Frameworks/*.framework ; do
		visitFrameworkOrApp "$FRAMEWORK" x86_64 macOS/Frameworks/
	done

	for FRAMEWORK in /System/Library/PrivateFrameworks/*.framework ; do
		visitFrameworkOrApp "$FRAMEWORK" x86_64 macOS/PrivateFrameworks/
	done

	for FRAMEWORK in /usr/lib/*.dylib ; do
		visitFrameworkOrApp "$FRAMEWORK" x86_64 macOS/usr/lib/
	done

	for FRAMEWORK in /usr/lib/system/*.dylib ; do
		visitFrameworkOrApp "$FRAMEWORK" x86_64 macOS/usr/lib/
	done

	for FRAMEWORK in /System/iOSSupport/System/Library/Frameworks/*.framework ; do
		visitFrameworkOrApp "$FRAMEWORK" x86_64 macOS/iOSSupport/Frameworks/
	done

	for FRAMEWORK in /System/iOSSupport/System/Library/PrivateFrameworks/*.framework ; do
		visitFrameworkOrApp "$FRAMEWORK" x86_64 macOS/iOSSupport/PrivateFrameworks/
	done
}

iOS
watchOS
tvOS
macOS
