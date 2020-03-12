#pragma once



class ScoreboardId {

public:
    static long INVALID;

    void operator>(ScoreboardId const&)const;
    ScoreboardId(long);
    void operator!=(ScoreboardId const&)const;
    void getIdentityDef()const;
    void operator<(ScoreboardId const&)const;
    ScoreboardId();
    void operator==(ScoreboardId const&)const;
    void getHash()const;
    ScoreboardId(ScoreboardId const&);
};
