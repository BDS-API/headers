#pragma once

#include "./ScoreboardId.h"
#include "../bedrock/level/scoreboard/Scoreboard.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "./Objective.h"
#include "./ObjectiveCriteria.h"
#include "./ScoreboardIdentityRef.h"
#include <string>


class Objective {

public:

    void getPlayerScore(ScoreboardId const&)const;
    std::string getDisplayName()const;
    std::string getName()const;
    Objective(std::string const&, ObjectiveCriteria const&);
    void setDisplayName(std::string const&);
    void getRenderType()const;
    void getCriteria()const;
    void getPlayers()const;
    void getScores()const;
//  void getPlayerScoreRef(ScoreboardId const&, ScoreInfoRef &); //TODO: incomplete function definition
    bool hasScores()const;
//  void _modifyPlayerScore(int &, ScoreboardId const&, int, PlayerScoreSetFunction); //TODO: incomplete function definition
    void _loadPlayerScore(ScoreboardIdentityRef &, int);
    bool hasScore(ScoreboardId const&)const;
    void _resetPlayer(ScoreboardId const&);
    void deserialize(CompoundTag const&, Scoreboard &);
    void serialize(Objective const&);
    ~Objective();
};
