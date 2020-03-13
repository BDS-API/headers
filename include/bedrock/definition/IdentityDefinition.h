#pragma once

#include <string>
#include <functional>


class IdentityDefinition {

public:
    static long Invalid;

    void _init(); // _ZN18IdentityDefinition5_initEv
    IdentityDefinition(); // _ZN18IdentityDefinitionC2Ev
    IdentityDefinition(ScoreboardId const&, PlayerScoreboardId const&); // _ZN18IdentityDefinitionC2ERK12ScoreboardIdRK18PlayerScoreboardId
    IdentityDefinition(ScoreboardId const&, ActorUniqueID const&); // _ZN18IdentityDefinitionC2ERK12ScoreboardIdRK13ActorUniqueID
    IdentityDefinition(ScoreboardId const&, std::string const&); // _ZN18IdentityDefinitionC2ERK12ScoreboardIdRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    bool isHiddenFakePlayerNameString(std::string const&); // _ZN18IdentityDefinition28isHiddenFakePlayerNameStringERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    IdentityDefinition(IdentityDefinition const&); // _ZN18IdentityDefinitionC2ERKS_
    IdentityDefinition(IdentityDefinition &&); // _ZN18IdentityDefinitionC2EOS_
    bool isValid()const; // _ZNK18IdentityDefinition7isValidEv
    void getScoreboardId()const; // _ZNK18IdentityDefinition15getScoreboardIdEv
    void getPlayerId()const; // _ZNK18IdentityDefinition11getPlayerIdEv
    void getEntityId()const; // _ZNK18IdentityDefinition11getEntityIdEv
    std::string getFakePlayerName()const; // _ZNK18IdentityDefinition17getFakePlayerNameB5cxx11Ev
    void getName(std::function<std::string const& (ActorUniqueID)> const&)const; // _ZNK18IdentityDefinition7getNameERKSt8functionIFRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE13ActorUniqueIDEE
    bool isPlayerType()const; // _ZNK18IdentityDefinition12isPlayerTypeEv
    void getIdentityType()const; // _ZNK18IdentityDefinition15getIdentityTypeEv
    bool isEntityType()const; // _ZNK18IdentityDefinition12isEntityTypeEv
    bool isFakeType()const; // _ZNK18IdentityDefinition10isFakeTypeEv
    bool isHiddenFakePlayerType()const; // _ZNK18IdentityDefinition22isHiddenFakePlayerTypeEv
    void convertFakeToReal(IdentityDefinition &, PlayerScoreboardId const&); // _ZN18IdentityDefinition17convertFakeToRealERS_RK18PlayerScoreboardId
    ~IdentityDefinition(); // _ZN18IdentityDefinitionD2Ev
};
