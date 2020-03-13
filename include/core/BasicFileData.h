#pragma once



namespace Core {

    namespace FileSystem {

        class BasicFileData {

        public:
            ~BasicFileData(); // _ZN4Core10FileSystem13BasicFileDataD2Ev
            BasicFileData(Core::FileSystem::BasicFileData &&); // _ZN4Core10FileSystem13BasicFileDataC2EOS1_
            BasicFileData(Core::FileSystem::BasicFileData const&); // _ZN4Core10FileSystem13BasicFileDataC2ERKS1_
        };
    }
}
