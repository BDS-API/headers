#pragma once

#include "../bedrock/nbt/ListTag.h"


class GameVersion {

public:
    void compare(GameVersion const&)const;
    GameVersion(ListTag const&);
    void operator>=(GameVersion const&)const;
    void operator==(GameVersion const&)const;
    void operator<(GameVersion const&)const;
    GameVersion(GameVersion &&);
    std::string asString()const;
//  void octet(GameVersion::Octet)const; //TODO: incomplete function definition
    GameVersion();
    void serialize()const;
    void operator>(GameVersion const&)const;
    GameVersion(GameVersion const&);
    GameVersion(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
    std::string _betaFlag(unsigned int)const;
    ~GameVersion();
    void current();
    void operator<=(GameVersion const&)const;
    void operator!=(GameVersion const&)const;
};
