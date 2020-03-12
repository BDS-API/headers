#pragma once



namespace Core {

    namespace FileSystem {

        class BasicFileData {

        public:
            ~BasicFileData();
            BasicFileData(Core::FileSystem::BasicFileData &&);
            BasicFileData(Core::FileSystem::BasicFileData const&);
        };
    }
}
