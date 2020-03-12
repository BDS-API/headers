#pragma once

#include "ScoreboardId.h"


class PlayerScore {

public:
    PlayerScore(PlayerScore const&);
    PlayerScore(ScoreboardId const&, int);
    PlayerScore(PlayerScore &&);
    void getId()const;
    void getScore()const;
};
