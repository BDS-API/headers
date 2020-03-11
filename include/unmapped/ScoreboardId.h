#pragma once

#include "./ScoreboardId.h"


class ScoreboardId {

public:
    static long INVALID;


    ScoreboardId();
    ScoreboardId(long);
    ScoreboardId(ScoreboardId const&);
    void getHash()const;
    void operator==(ScoreboardId const&)const;
    void operator!=(ScoreboardId const&)const;
    void operator>(ScoreboardId const&)const;
    void operator<(ScoreboardId const&)const;
    void getIdentityDef()const;
};
