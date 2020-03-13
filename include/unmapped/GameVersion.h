#pragma once

#include <string>


class GameVersion {

public:
    ~GameVersion(); // _ZN11GameVersionD2Ev
    GameVersion(GameVersion const&); // _ZN11GameVersionC2ERKS_
    GameVersion(GameVersion &&); // _ZN11GameVersionC2EOS_
    void current(); // _ZN11GameVersion7currentEv
    GameVersion(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int); // _ZN11GameVersionC2Ejjjjj
    std::string _betaFlag(unsigned int)const; // _ZNK11GameVersion9_betaFlagB5cxx11Ej
    GameVersion(ListTag const&); // _ZN11GameVersionC2ERK7ListTag
    GameVersion(); // _ZN11GameVersionC2Ev
    void serialize()const; // _ZNK11GameVersion9serializeEv
    void compare(GameVersion const&)const; // _ZNK11GameVersion7compareERKS_
    void operator<(GameVersion const&)const; // _ZNK11GameVersionltERKS_
    void operator<=(GameVersion const&)const; // _ZNK11GameVersionleERKS_
    void operator>(GameVersion const&)const; // _ZNK11GameVersiongtERKS_
    void operator>=(GameVersion const&)const; // _ZNK11GameVersiongeERKS_
    void operator==(GameVersion const&)const; // _ZNK11GameVersioneqERKS_
    void operator!=(GameVersion const&)const; // _ZNK11GameVersionneERKS_
//  void octet(GameVersion::Octet)const; //TODO: incomplete function definition // _ZNK11GameVersion5octetENS_5OctetE
    std::string asString()const; // _ZNK11GameVersion8asStringB5cxx11Ev
};
