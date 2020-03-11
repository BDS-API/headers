#pragma once

#include "../bedrock/nbt/ListTag.h"
#include "./GameVersion.h"
#include <string>


class GameVersion {

public:

    ~GameVersion();
    GameVersion(GameVersion const&);
    GameVersion(GameVersion &&);
    void current();
    GameVersion(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
    std::string _betaFlag(unsigned int)const;
    GameVersion(ListTag const&);
    GameVersion();
    void serialize()const;
    void compare(GameVersion const&)const;
    void operator<(GameVersion const&)const;
    void operator<=(GameVersion const&)const;
    void operator>(GameVersion const&)const;
    void operator>=(GameVersion const&)const;
    void operator==(GameVersion const&)const;
    void operator!=(GameVersion const&)const;
//  void octet(GameVersion::Octet)const; //TODO: incomplete function definition
    std::string asString()const;
};
