#pragma once

#include <string>
#include "ObjectiveCriteria.h"
#include "../bedrock/level/scoreboard/Scoreboard.h"
#include "ScoreboardId.h"
#include "ScoreboardIdentityRef.h"
#include "../bedrock/nbt/CompoundTag.h"


class Objective {

public:
//  void _modifyPlayerScore(int &, ScoreboardId const&, int, PlayerScoreSetFunction); //TODO: incomplete function definition
    void setDisplayName(std::string const&);
    ~Objective();
    void _resetPlayer(ScoreboardId const&);
    void getRenderType()const;
    void getPlayers()const;
    void getCriteria()const;
    Objective(std::string const&, ObjectiveCriteria const&);
    void getScores()const;
//  void getPlayerScoreRef(ScoreboardId const&, ScoreInfoRef &); //TODO: incomplete function definition
    void deserialize(CompoundTag const&, Scoreboard &);
    void serialize(Objective const&);
    std::string getDisplayName()const;
    bool hasScores()const;
    std::string getName()const;
    void getPlayerScore(ScoreboardId const&)const;
    void _loadPlayerScore(ScoreboardIdentityRef &, int);
    bool hasScore(ScoreboardId const&)const;
};
