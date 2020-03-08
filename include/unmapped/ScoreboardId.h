#pragma once



class ScoreboardId {

public:
    static long INVALID;


    ScoreboardId(void);
    ScoreboardId(long);
    ScoreboardId(ScoreboardId const&);
    void getHash()const;
    void getIdentityDef()const;
};
