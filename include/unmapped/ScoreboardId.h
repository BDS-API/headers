#pragma once



class ScoreboardId {

public:
    static long INVALID;

    ScoreboardId(ScoreboardId const&);
    void operator<(ScoreboardId const&)const;
    void operator!=(ScoreboardId const&)const;
    ScoreboardId(long);
    void operator==(ScoreboardId const&)const;
    ScoreboardId();
    void getHash()const;
    void operator>(ScoreboardId const&)const;
    void getIdentityDef()const;
};
