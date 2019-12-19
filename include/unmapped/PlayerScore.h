#pragma once

class PlayerScore {

public:

    PlayerScore(ScoreboardId const&, int);
    void getId(void)const;
    void getScore(void)const;
    PlayerScore(PlayerScore&&);
    PlayerScore(PlayerScore const&);
};
