#pragma once

#include <string>
#include "../bedrock/nbt/CompoundTag.h"


class CreativeGroupInfo {

public:
    CreativeGroupInfo();
    CreativeGroupInfo(CreativeGroupInfo &&);
    CreativeGroupInfo(std::string const&, short, short, CompoundTag const*);
    ~CreativeGroupInfo();
};
