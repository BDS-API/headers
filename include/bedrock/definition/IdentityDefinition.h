#pragma once

#include <string>
#include <functional>


class IdentityDefinition {

public:
    static long Invalid;

    void getEntityId()const;
    void convertFakeToReal(IdentityDefinition &, PlayerScoreboardId const&);
    void _init();
    IdentityDefinition(ScoreboardId const&, PlayerScoreboardId const&);
    void getPlayerId()const;
    void getIdentityType()const;
    bool isHiddenFakePlayerNameString(std::string const&);
    bool isHiddenFakePlayerType()const;
    ~IdentityDefinition();
    IdentityDefinition();
    IdentityDefinition(IdentityDefinition const&);
    void getScoreboardId()const;
    bool isFakeType()const;
    void getName(std::function<std::string const& (ActorUniqueID)> const&)const;
    IdentityDefinition(IdentityDefinition &&);
    IdentityDefinition(ScoreboardId const&, ActorUniqueID const&);
    bool isPlayerType()const;
    bool isEntityType()const;
    IdentityDefinition(ScoreboardId const&, std::string const&);
    std::string getFakePlayerName()const;
    bool isValid()const;
};
