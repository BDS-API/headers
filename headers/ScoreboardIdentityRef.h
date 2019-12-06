#pragma once

class ScoreboardIdentityRef {

public:
    static long ScoreboardIdentityRef::Undefined;


    void ScoreboardIdentityRef(ScoreboardIdentityRef const&);
    void ScoreboardIdentityRef(void);
    void ScoreboardIdentityRef(ScoreboardId const&);
    void getScoreboardId(void)const;
    void getPlayerId(void)const;
    void getEntityId(void)const;
    void getName(std::function<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const& ()(ActorUniqueID)> const&)const;
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
