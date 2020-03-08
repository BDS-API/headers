#pragma once

#include "../../unmapped/ScoreboardId"
#include "../../unmapped/PlayerScoreboardId"


class IdentityDefinition {

public:
    static long Invalid;


    void _init(void);
    IdentityDefinition(void);
    IdentityDefinition(ScoreboardId const&, PlayerScoreboardId const&);
    IdentityDefinition(ScoreboardId const&, ActorUniqueID const&);
    IdentityDefinition(ScoreboardId const&, std::string const&);
    bool isHiddenFakePlayerNameString(std::string const&);
    IdentityDefinition(IdentityDefinition const&);
    IdentityDefinition(IdentityDefinition&&);
    bool isValid(void)const;
    void getScoreboardId(void)const;
    void getPlayerId(void)const;
    void getEntityId(void)const;
    void getName(std::function<std::string const& ()(ActorUniqueID)> const&)const;
    bool isPlayerType(void)const;
    void getIdentityType(void)const;
    bool isEntityType(void)const;
    bool isFakeType(void)const;
    bool isHiddenFakePlayerType(void)const;
    void convertFakeToReal(IdentityDefinition&, PlayerScoreboardId const&);
};
