#pragma once

#include "../bedrock/level/scoreboard/Scoreboard"


class ScoreboardIdentityRef {

public:
    static long Undefined;


    ScoreboardIdentityRef(ScoreboardIdentityRef const&);
    ScoreboardIdentityRef(void);
    ScoreboardIdentityRef(ScoreboardId const&);
    void getScoreboardId()const;
    void getPlayerId()const;
    void getEntityId()const;
    void getName(std::function<std::string ()(ActorUniqueID)> const&)const;
    void getNumReferences()const;
    bool isCurrentlyReferenced()const;
    void getIdentityType()const;
    bool isPlayerType()const;
    bool isEntityType()const;
    bool isFakeType()const;
    bool isHiddenFakePlayer()const;
    bool hasScoreInObjective(Objective const&)const;
    void removeFromObjective(Scoreboard &, Objective &);
    void modifyScoreInObjective(int &, Objective &, int, PlayerScoreSetFunction);
    void serialize(ScoreboardIdentityRef const&);
};
