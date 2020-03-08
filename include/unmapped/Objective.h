#pragma once

#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/level/scoreboard/Scoreboard"


class Objective {

public:

    void getPlayerScore(ScoreboardId const&)const;
    Objective(std::string const&, ObjectiveCriteria const&);
    void setDisplayName(std::string const&);
    void getRenderType()const;
    void getCriteria()const;
    void getPlayers()const;
    void getScores()const;
    void getPlayerScoreRef(ScoreboardId const&, ScoreInfoRef &);
    bool hasScores()const;
    void _modifyPlayerScore(int &, ScoreboardId const&, int, PlayerScoreSetFunction);
    void _loadPlayerScore(ScoreboardIdentityRef &, int);
    bool hasScore(ScoreboardId const&)const;
    void _resetPlayer(ScoreboardId const&);
    void deserialize(CompoundTag const&, Scoreboard &);
    void serialize(Objective const&);
};
