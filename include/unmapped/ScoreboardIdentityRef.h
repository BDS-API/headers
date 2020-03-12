#pragma once

#include "Objective.h"
#include <string>
#include "../bedrock/level/scoreboard/Scoreboard.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include <functional>
#include "ScoreboardId.h"


class ScoreboardIdentityRef {

public:
    static long Undefined;

    bool isFakeType()const;
    void serialize(ScoreboardIdentityRef const&);
    bool hasScoreInObjective(Objective const&)const;
    bool isPlayerType()const;
    bool isHiddenFakePlayer()const;
    void getScoreboardId()const;
    ScoreboardIdentityRef(ScoreboardId const&);
    std::string getFakePlayerName()const;
    ScoreboardIdentityRef();
    bool isCurrentlyReferenced()const;
    void getNumReferences()const;
    ScoreboardIdentityRef(ScoreboardIdentityRef const&);
    void removeFromObjective(Scoreboard &, Objective &);
    void getIdentityType()const;
    void getEntityId()const;
    void getName(std::function<std::string const& (ActorUniqueID)> const&)const;
    void getPlayerId()const;
//  void modifyScoreInObjective(int &, Objective &, int, PlayerScoreSetFunction); //TODO: incomplete function definition
    bool isEntityType()const;
};
