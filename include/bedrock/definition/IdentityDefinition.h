#pragma once

#include "../../unmapped/ScoreboardId"
#include "../../unmapped/PlayerScoreboardId"
#include "../actor/unmapped/ActorUniqueID"


class IdentityDefinition {

public:
    static long Invalid;


    void _init();
    IdentityDefinition(void);
    IdentityDefinition(ScoreboardId const&, PlayerScoreboardId const&);
    IdentityDefinition(ScoreboardId const&, ActorUniqueID const&);
    IdentityDefinition(ScoreboardId const&, std::string const&);
    bool isHiddenFakePlayerNameString(std::string const&);
    IdentityDefinition(IdentityDefinition const&);
    IdentityDefinition(IdentityDefinition&&);
    bool isValid()const;
    void getScoreboardId()const;
    void getPlayerId()const;
    void getEntityId()const;
    void getName(std::function<std::string ()(ActorUniqueID)> const&)const;
    bool isPlayerType()const;
    void getIdentityType()const;
    bool isEntityType()const;
    bool isFakeType()const;
    bool isHiddenFakePlayerType()const;
    void convertFakeToReal(IdentityDefinition&, PlayerScoreboardId const&);
};
