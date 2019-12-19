#pragma once

class IdentityDefinition {

public:
    static long Invalid;


    void _init(void);
    void IdentityDefinition(void);
    void IdentityDefinition(ScoreboardId const&, PlayerScoreboardId const&);
    void IdentityDefinition(ScoreboardId const&, ActorUniqueID const&);
    void IdentityDefinition(ScoreboardId const&, std::string const&);
    bool isHiddenFakePlayerNameString(std::string const&);
    void IdentityDefinition(IdentityDefinition const&);
    void IdentityDefinition(IdentityDefinition&&);
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
