#pragma once

#include "./PlayerScoreboardId.h"


class PlayerScoreboardId {

public:
    static long INVALID;


    PlayerScoreboardId();
    PlayerScoreboardId(long);
    void operator==(PlayerScoreboardId const&)const;
    void operator!=(PlayerScoreboardId const&)const;
    void getHash()const;
};
