#pragma once



namespace Core {

    namespace FileSystem {

        class BasicFileData {

        public:
            BasicFileData(Core::FileSystem::BasicFileData const&);
            ~BasicFileData();
            BasicFileData(Core::FileSystem::BasicFileData &&);
        };
    }
}
