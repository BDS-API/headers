#pragma once

class GameVersion {

public:

    void GameVersion(GameVersion const&);
    void GameVersion(GameVersion&&);
    void current(void);
    void GameVersion(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
    void GameVersion(ListTag const&);
    void GameVersion(void);
    void serialize(void)const;
    void compare(GameVersion const&)const;
    void octet(GameVersion::Octet)const;
};
