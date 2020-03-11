#pragma once

#include "./BasicFileData.h"


namespace Core::FileSystem {

class BasicFileData {

public:

    ~BasicFileData();
    BasicFileData(Core::FileSystem::BasicFileData &&);
    BasicFileData(Core::FileSystem::BasicFileData const&);
};

}