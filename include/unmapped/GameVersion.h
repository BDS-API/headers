#pragma once

#include <string>


class GameVersion {

public:
    std::string _betaFlag(unsigned int)const;
    void current();
    GameVersion(GameVersion const&);
    GameVersion(ListTag const&);
    void compare(GameVersion const&)const;
    void operator>(GameVersion const&)const;
    void operator==(GameVersion const&)const;
    void operator>=(GameVersion const&)const;
//  void octet(GameVersion::Octet)const; //TODO: incomplete function definition
    GameVersion();
    void operator<=(GameVersion const&)const;
    GameVersion(GameVersion &&);
    ~GameVersion();
    void serialize()const;
    void operator<(GameVersion const&)const;
    GameVersion(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
    void operator!=(GameVersion const&)const;
    std::string asString()const;
};
