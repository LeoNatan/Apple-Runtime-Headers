#!/bin/bash

rm -fr iOS
rm -fr macOS
rm -fr watchOS
rm -fr tvOS
rm -fr macOS

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

iOS() {
	# iOS

	for FRAMEWORK in "$(xcode-select -p)"/Platforms/iPhoneOS.platform/Developer/Library/CoreSimulator/Profiles/Runtimes/iOS.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/*.framework ; do
	  echo -e "\033[1;34mProcessing $(basename $FRAMEWORK)\033[0m"
	  ./class-dump --arch x86_64 -H -o iOS/Frameworks/$(basename "$FRAMEWORK") "$FRAMEWORK"
	done

	for FRAMEWORK in "$(xcode-select -p)"/Platforms/iPhoneOS.platform/Developer/Library/CoreSimulator/Profiles/Runtimes/iOS.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/*.framework ; do
	  printf >&2 "\033[1;31mProcessing $(basename $FRAMEWORK)\033[0m\n"
	  ./class-dump --arch x86_64 -H -o iOS/PrivateFrameworks/$(basename "$FRAMEWORK") "$FRAMEWORK"
	done

	for FRAMEWORK in "$(xcode-select -p)"/Platforms/iPhoneOS.platform/Developer/Library/CoreSimulator/Profiles/Runtimes/iOS.simruntime/Contents/Resources/RuntimeRoot/usr/lib/*.dylib ; do
	  echo -e "\033[1;34mProcessing $(basename $FRAMEWORK)\033[0m"
	  FILE=$(basename "$FRAMEWORK")
	  ./class-dump --arch x86_64 -H -o iOS/usr/lib/${FILE%.*} "$FRAMEWORK"
	done

	for FRAMEWORK in "$(xcode-select -p)"/Platforms/iPhoneOS.platform/Developer/Library/CoreSimulator/Profiles/Runtimes/iOS.simruntime/Contents/Resources/RuntimeRoot/usr/lib/system/*.dylib ; do
	  echo -e "\033[1;34mProcessing $(basename $FRAMEWORK)\033[0m"
	  FILE=$(basename "$FRAMEWORK")
	  ./class-dump --arch x86_64 -H -o iOS/usr/lib/${FILE%.*} "$FRAMEWORK"
	done
}

watchOS() {
	# watchOS

	for FRAMEWORK in "$(xcode-select -p)"/Platforms/WatchOS.platform/Developer/Library/CoreSimulator/Profiles/Runtimes/watchOS.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/*.framework ; do
	  echo -e "\033[1;34mProcessing $(basename $FRAMEWORK)\033[0m"
	  ./class-dump --arch i386 -H -o watchOS/Frameworks/$(basename "$FRAMEWORK") "$FRAMEWORK"
	done

	for FRAMEWORK in "$(xcode-select -p)"/Platforms/WatchOS.platform/Developer/Library/CoreSimulator/Profiles/Runtimes/watchOS.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/*.framework ; do
	  printf >&2 "\033[1;31mProcessing $(basename $FRAMEWORK)\033[0m\n"
	  ./class-dump --arch i386 -H -o watchOS/PrivateFrameworks/$(basename "$FRAMEWORK") "$FRAMEWORK"
	done

	for FRAMEWORK in "$(xcode-select -p)"/Platforms/WatchOS.platform/Developer/Library/CoreSimulator/Profiles/Runtimes/watchOS.simruntime/Contents/Resources/RuntimeRoot/usr/lib/*.dylib ; do
	  echo -e "\033[1;34mProcessing $(basename $FRAMEWORK)\033[0m"
	  FILE=$(basename "$FRAMEWORK")
	  ./class-dump --arch i386 -H -o watchOS/usr/lib/${FILE%.*} "$FRAMEWORK"
	done

	for FRAMEWORK in "$(xcode-select -p)"/Platforms/WatchOS.platform/Developer/Library/CoreSimulator/Profiles/Runtimes/watchOS.simruntime/Contents/Resources/RuntimeRoot/usr/lib/system/*.dylib ; do
	  echo -e "\033[1;34mProcessing $(basename $FRAMEWORK)\033[0m"
	  FILE=$(basename "$FRAMEWORK")
	  ./class-dump --arch i386 -H -o watchOS/usr/lib/${FILE%.*} "$FRAMEWORK"
	done
}

tvOS() {
	# tvOS

	for FRAMEWORK in "$(xcode-select -p)"/Platforms/AppleTVOS.platform/Developer/Library/CoreSimulator/Profiles/Runtimes/tvOS.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/*.framework ; do
	  echo -e "\033[1;34mProcessing $(basename $FRAMEWORK)\033[0m"
	  ./class-dump --arch x86_64 -H -o tvOS/Frameworks/$(basename "$FRAMEWORK") "$FRAMEWORK"
	done

	for FRAMEWORK in "$(xcode-select -p)"/Platforms/AppleTVOS.platform/Developer/Library/CoreSimulator/Profiles/Runtimes/tvOS.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/*.framework ; do
	  printf >&2 "\033[1;31mProcessing $(basename $FRAMEWORK)\033[0m\n"
	  ./class-dump --arch x86_64 -H -o tvOS/PrivateFrameworks/$(basename "$FRAMEWORK") "$FRAMEWORK"
	done

	for FRAMEWORK in "$(xcode-select -p)"/Platforms/AppleTVOS.platform/Developer/Library/CoreSimulator/Profiles/Runtimes/tvOS.simruntime/Contents/Resources/RuntimeRoot/usr/lib/*.dylib ; do
	  echo -e "\033[1;34mProcessing $(basename $FRAMEWORK)\033[0m"
	  FILE=$(basename "$FRAMEWORK")
	  ./class-dump --arch x86_64 -H -o tvOS/usr/lib/${FILE%.*} "$FRAMEWORK"
	done

	for FRAMEWORK in "$(xcode-select -p)"/Platforms/AppleTVOS.platform/Developer/Library/CoreSimulator/Profiles/Runtimes/tvOS.simruntime/Contents/Resources/RuntimeRoot/usr/lib/system/*.dylib ; do
	  echo -e "\033[1;34mProcessing $(basename $FRAMEWORK)\033[0m"
	  FILE=$(basename "$FRAMEWORK")
	  ./class-dump --arch x86_64 -H -o tvOS/usr/lib/${FILE%.*} "$FRAMEWORK"
	done
}

macOS() {
	# macOS

	for FRAMEWORK in /System/Library/Frameworks/*.framework ; do
	  echo -e "\033[1;34mProcessing $(basename $FRAMEWORK)\033[0m"
	  ./class-dump --arch x86_64 -H -o macOS/Frameworks/$(basename "$FRAMEWORK") "$FRAMEWORK"
	done

	for FRAMEWORK in /System/Library/PrivateFrameworks/*.framework ; do
	  printf >&2 "\033[1;31mProcessing $(basename $FRAMEWORK)\033[0m\n"
	  ./class-dump --arch x86_64 -H -o macOS/PrivateFrameworks/$(basename "$FRAMEWORK") "$FRAMEWORK"
	done

	for FRAMEWORK in /usr/lib/*.dylib ; do
	  echo -e "\033[1;34mProcessing $(basename $FRAMEWORK)\033[0m"
	  FILE=$(basename "$FRAMEWORK")
	  ./class-dump --arch x86_64 -H -o macOS/usr/lib/${FILE%.*} "$FRAMEWORK"
	done

	for FRAMEWORK in /usr/lib/system/*.dylib ; do
	  echo -e "\033[1;34mProcessing $(basename $FRAMEWORK)\033[0m"
	  FILE=$(basename "$FRAMEWORK")
	  ./class-dump --arch x86_64 -H -o macOS/usr/lib/${FILE%.*} "$FRAMEWORK"
	done
}

iOS &
watchOS &
tvOS &
macOS &
wait