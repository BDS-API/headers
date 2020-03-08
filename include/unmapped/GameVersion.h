#pragma once

#include "../bedrock/nbt/ListTag"


class GameVersion {

public:

    GameVersion(GameVersion const&);
    GameVersion(GameVersion&&);
    void current();
    GameVersion(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
    GameVersion(ListTag const&);
    GameVersion(void);
    void serialize()const;
    void compare(GameVersion const&)const;
    void octet(GameVersion::Octet)const;
};
