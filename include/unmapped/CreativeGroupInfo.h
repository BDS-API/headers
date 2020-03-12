#pragma once

#include <string>


class CreativeGroupInfo {

public:
    CreativeGroupInfo(std::string const&, short, short, CompoundTag const*);
    ~CreativeGroupInfo();
    CreativeGroupInfo(CreativeGroupInfo &&);
    CreativeGroupInfo();
};
