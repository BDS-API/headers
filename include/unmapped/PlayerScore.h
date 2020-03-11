#pragma once

#include "./ScoreboardId.h"
#include "./PlayerScore.h"


class PlayerScore {

public:

    PlayerScore(ScoreboardId const&, int);
    void getId()const;
    void getScore()const;
    PlayerScore(PlayerScore &&);
    PlayerScore(PlayerScore const&);
};
