#pragma once

class PlayerScoreboardId {

public:
    static long INVALID;


    PlayerScoreboardId(void);
    PlayerScoreboardId(long);
    void getHash(void)const;
};
