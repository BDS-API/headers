#pragma once

#include "./CreativeGroupInfo.h"
#include "../bedrock/nbt/CompoundTag.h"
#include <string>


class CreativeGroupInfo {

public:

    CreativeGroupInfo();
    CreativeGroupInfo(std::string const&, short, short, CompoundTag const*);
    ~CreativeGroupInfo();
    CreativeGroupInfo(CreativeGroupInfo &&);
};
