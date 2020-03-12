#pragma once



class PlayerScore {

public:
    PlayerScore(ScoreboardId const&, int);
    void getScore()const;
    PlayerScore(PlayerScore const&);
    void getId()const;
    PlayerScore(PlayerScore &&);
};
