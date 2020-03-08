#pragma once



using namespace Core::FileSystem;

class BasicFileData {

public:

    BasicFileData(Core::FileSystem::BasicFileData&&);
    BasicFileData(Core::FileSystem::BasicFileData const&);
};
