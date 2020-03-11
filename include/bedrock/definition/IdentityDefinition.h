#pragma once

#include "./IdentityDefinition.h"
#include "../../unmapped/PlayerScoreboardId.h"
#include "../actor/unmapped/ActorUniqueID.h"
#include "../../unmapped/ScoreboardId.h"
#include <functional>
#include <string>


class IdentityDefinition {

public:
    static long Invalid;


    void _init();
    IdentityDefinition();
    IdentityDefinition(ScoreboardId const&, PlayerScoreboardId const&);
    IdentityDefinition(ScoreboardId const&, ActorUniqueID const&);
    IdentityDefinition(ScoreboardId const&, std::string const&);
    bool isHiddenFakePlayerNameString(std::string const&);
    IdentityDefinition(IdentityDefinition const&);
    IdentityDefinition(IdentityDefinition &&);
    bool isValid()const;
    void getScoreboardId()const;
    void getPlayerId()const;
    void getEntityId()const;
    std::string getFakePlayerName()const;
    void getName(std::function<std::string const& (ActorUniqueID)> const&)const;
    bool isPlayerType()const;
    void getIdentityType()const;
    bool isEntityType()const;
    bool isFakeType()const;
    bool isHiddenFakePlayerType()const;
    void convertFakeToReal(IdentityDefinition &, PlayerScoreboardId const&);
    ~IdentityDefinition();
};
