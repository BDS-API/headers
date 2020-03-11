#pragma once

#include "./ScoreboardId.h"
#include "../bedrock/level/scoreboard/Scoreboard.h"
#include "./Objective.h"
#include "./ScoreboardIdentityRef.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include <functional>
#include <string>


class ScoreboardIdentityRef {

public:
    static long Undefined;


    ScoreboardIdentityRef(ScoreboardIdentityRef const&);
    ScoreboardIdentityRef();
    ScoreboardIdentityRef(ScoreboardId const&);
    void getScoreboardId()const;
    void getPlayerId()const;
    void getEntityId()const;
    std::string getFakePlayerName()const;
    void getName(std::function<std::string const& (ActorUniqueID)> const&)const;
    void getNumReferences()const;
    bool isCurrentlyReferenced()const;
    void getIdentityType()const;
    bool isPlayerType()const;
    bool isEntityType()const;
    bool isFakeType()const;
    bool isHiddenFakePlayer()const;
    bool hasScoreInObjective(Objective const&)const;
    void removeFromObjective(Scoreboard &, Objective &);
//  void modifyScoreInObjective(int &, Objective &, int, PlayerScoreSetFunction); //TODO: incomplete function definition
    void serialize(ScoreboardIdentityRef const&);
};
