#pragma once



class PlayerScoreboardId {

public:
    static long INVALID;

    PlayerScoreboardId();
    void operator==(PlayerScoreboardId const&)const;
    PlayerScoreboardId(long);
    void operator!=(PlayerScoreboardId const&)const;
    void getHash()const;
};
