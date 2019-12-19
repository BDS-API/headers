#pragma once

class ScoreboardIdentityRef {

public:
    static long Undefined;


    ScoreboardIdentityRef(ScoreboardIdentityRef const&);
    ScoreboardIdentityRef(void);
    ScoreboardIdentityRef(ScoreboardId const&);
    void getScoreboardId(void)const;
    void getPlayerId(void)const;
    void getEntityId(void)const;
    void getName(std::function<std::string const& ()(ActorUniqueID)> const&)const;
    void getNumReferences(void)const;
    bool isCurrentlyReferenced(void)const;
    void getIdentityType(void)const;
    bool isPlayerType(void)const;
    bool isEntityType(void)const;
    bool isFakeType(void)const;
    bool isHiddenFakePlayer(void)const;
    bool hasScoreInObjective(Objective const&)const;
    void removeFromObjective(Scoreboard &, Objective &);
    void modifyScoreInObjective(int &, Objective &, int, PlayerScoreSetFunction);
    void serialize(ScoreboardIdentityRef const&);
};
