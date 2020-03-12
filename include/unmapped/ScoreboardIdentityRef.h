#pragma once

#include <string>
#include <functional>


class ScoreboardIdentityRef {

public:
    static long Undefined;

    bool isFakeType()const;
    bool isCurrentlyReferenced()const;
    bool hasScoreInObjective(Objective const&)const;
    void getPlayerId()const;
    void serialize(ScoreboardIdentityRef const&);
    void getNumReferences()const;
    void getScoreboardId()const;
    void removeFromObjective(Scoreboard &, Objective &);
    bool isPlayerType()const;
//  void modifyScoreInObjective(int &, Objective &, int, PlayerScoreSetFunction); //TODO: incomplete function definition
    bool isHiddenFakePlayer()const;
    void getIdentityType()const;
    ScoreboardIdentityRef(ScoreboardId const&);
    void getEntityId()const;
    bool isEntityType()const;
    void getName(std::function<std::string const& (ActorUniqueID)> const&)const;
    std::string getFakePlayerName()const;
    ScoreboardIdentityRef();
    ScoreboardIdentityRef(ScoreboardIdentityRef const&);
};
