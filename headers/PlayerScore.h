#pragma once

class PlayerScore {

public:

    void PlayerScore(ScoreboardId const&, int);
    void getId(void)const;
    void getScore(void)const;
    void PlayerScore(PlayerScore&&);
    void PlayerScore(PlayerScore const&);
};
