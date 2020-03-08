#pragma once



class CreativeGroupInfo {

public:

    CreativeGroupInfo(void);
    CreativeGroupInfo(std::string const&, short, short, CompoundTag const*);
    CreativeGroupInfo(CreativeGroupInfo&&);
};
