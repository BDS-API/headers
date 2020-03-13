#pragma once

#include <string>


class CreativeGroupInfo {

public:
    CreativeGroupInfo(); // _ZN17CreativeGroupInfoC2Ev
    CreativeGroupInfo(std::string const&, short, short, CompoundTag const*); // _ZN17CreativeGroupInfoC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEssPK11CompoundTag
    ~CreativeGroupInfo(); // _ZN17CreativeGroupInfoD2Ev
    CreativeGroupInfo(CreativeGroupInfo &&); // _ZN17CreativeGroupInfoC2EOS_
};
