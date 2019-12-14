#pragma once

class CreativeGroupInfo {

public:

    void CreativeGroupInfo(void);
    void CreativeGroupInfo(std::string const&, short, short, CompoundTag const*);
    void CreativeGroupInfo(CreativeGroupInfo&&);
};
