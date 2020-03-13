#pragma once



class PlayerScore {

public:
    PlayerScore(ScoreboardId const&, int); // _ZN11PlayerScoreC2ERK12ScoreboardIdi
    void getId()const; // _ZNK11PlayerScore5getIdEv
    void getScore()const; // _ZNK11PlayerScore8getScoreEv
    PlayerScore(PlayerScore &&); // _ZN11PlayerScoreC2EOS_
    PlayerScore(PlayerScore const&); // _ZN11PlayerScoreC2ERKS_
};
