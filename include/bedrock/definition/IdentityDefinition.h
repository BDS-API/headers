#pragma once

#include <string>
#include "../../unmapped/ScoreboardId.h"
#include "../actor/unmapped/ActorUniqueID.h"
#include "../../unmapped/PlayerScoreboardId.h"
#include <functional>


class IdentityDefinition {

public:
    static long Invalid;

    void getPlayerId()const;
    bool isEntityType()const;
    IdentityDefinition();
    bool isPlayerType()const;
    IdentityDefinition(IdentityDefinition const&);
    void getEntityId()const;
    void getIdentityType()const;
    void convertFakeToReal(IdentityDefinition &, PlayerScoreboardId const&);
    bool isHiddenFakePlayerNameString(std::string const&);
    ~IdentityDefinition();
    void getScoreboardId()const;
    void _init();
    bool isFakeType()const;
    IdentityDefinition(ScoreboardId const&, std::string const&);
    IdentityDefinition(ScoreboardId const&, PlayerScoreboardId const&);
    bool isHiddenFakePlayerType()const;
    std::string getFakePlayerName()const;
    void getName(std::function<std::string const& (ActorUniqueID)> const&)const;
    IdentityDefinition(IdentityDefinition &&);
    IdentityDefinition(ScoreboardId const&, ActorUniqueID const&);
    bool isValid()const;
};
