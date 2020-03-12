#pragma once



class PlayerScoreboardId {

public:
    static long INVALID;

    void operator==(PlayerScoreboardId const&)const;
    void getHash()const;
    PlayerScoreboardId(long);
    PlayerScoreboardId();
    void operator!=(PlayerScoreboardId const&)const;
};
