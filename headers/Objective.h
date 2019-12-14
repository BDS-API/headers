#pragma once

class Objective {

public:

    void getPlayerScore(ScoreboardId const&)const;
    void Objective(std::string const&, ObjectiveCriteria const&);
    void setDisplayName(std::string const&);
    void getRenderType(void)const;
    void getCriteria(void)const;
    void getPlayers(void)const;
    void getScores(void)const;
    void getPlayerScoreRef(ScoreboardId const&, ScoreInfoRef &);
    bool hasScores(void)const;
    void _modifyPlayerScore(int &, ScoreboardId const&, int, PlayerScoreSetFunction);
    void _loadPlayerScore(ScoreboardIdentityRef &, int);
    bool hasScore(ScoreboardId const&)const;
    void _resetPlayer(ScoreboardId const&);
    void deserialize(CompoundTag const&, Scoreboard &);
    void serialize(Objective const&);
};
