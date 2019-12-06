#pragma once

class PlayerScoreboardId {

public:
    static long PlayerScoreboardId::INVALID;


    void PlayerScoreboardId(void);
    void PlayerScoreboardId(long);
    void getHash(void)const;
};
