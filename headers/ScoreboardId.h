#pragma once

class ScoreboardId {

public:
    static long INVALID;


    void ScoreboardId(void);
    void ScoreboardId(long);
    void ScoreboardId(ScoreboardId const&);
    void getHash(void)const;
    void getIdentityDef(void)const;
};
