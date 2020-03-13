#pragma once

#include <string>
#include <functional>


class ScoreboardIdentityRef {

public:
    static long Undefined;

    ScoreboardIdentityRef(ScoreboardIdentityRef const&); // _ZN21ScoreboardIdentityRefC2ERKS_
    ScoreboardIdentityRef(); // _ZN21ScoreboardIdentityRefC2Ev
    ScoreboardIdentityRef(ScoreboardId const&); // _ZN21ScoreboardIdentityRefC2ERK12ScoreboardId
    void getScoreboardId()const; // _ZNK21ScoreboardIdentityRef15getScoreboardIdEv
    void getPlayerId()const; // _ZNK21ScoreboardIdentityRef11getPlayerIdEv
    void getEntityId()const; // _ZNK21ScoreboardIdentityRef11getEntityIdEv
    std::string getFakePlayerName()const; // _ZNK21ScoreboardIdentityRef17getFakePlayerNameB5cxx11Ev
    void getName(std::function<std::string const& (ActorUniqueID)> const&)const; // _ZNK21ScoreboardIdentityRef7getNameERKSt8functionIFRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE13ActorUniqueIDEE
    void getNumReferences()const; // _ZNK21ScoreboardIdentityRef16getNumReferencesEv
    bool isCurrentlyReferenced()const; // _ZNK21ScoreboardIdentityRef21isCurrentlyReferencedEv
    void getIdentityType()const; // _ZNK21ScoreboardIdentityRef15getIdentityTypeEv
    bool isPlayerType()const; // _ZNK21ScoreboardIdentityRef12isPlayerTypeEv
    bool isEntityType()const; // _ZNK21ScoreboardIdentityRef12isEntityTypeEv
    bool isFakeType()const; // _ZNK21ScoreboardIdentityRef10isFakeTypeEv
    bool isHiddenFakePlayer()const; // _ZNK21ScoreboardIdentityRef18isHiddenFakePlayerEv
    bool hasScoreInObjective(Objective const&)const; // _ZNK21ScoreboardIdentityRef19hasScoreInObjectiveERK9Objective
    void removeFromObjective(Scoreboard &, Objective &); // _ZN21ScoreboardIdentityRef19removeFromObjectiveER10ScoreboardR9Objective
//  void modifyScoreInObjective(int &, Objective &, int, PlayerScoreSetFunction); //TODO: incomplete function definition // _ZN21ScoreboardIdentityRef22modifyScoreInObjectiveERiR9Objectivei22PlayerScoreSetFunction
    void serialize(ScoreboardIdentityRef const&); // _ZN21ScoreboardIdentityRef9serializeERKS_
};
