#pragma once

class IdentityDefinition {

public:
    static long IdentityDefinition::Invalid;


    void _init(void);
    void IdentityDefinition(void);
    void IdentityDefinition(ScoreboardId const&, PlayerScoreboardId const&);
    void IdentityDefinition(ScoreboardId const&, ActorUniqueID const&);
    void IdentityDefinition(ScoreboardId const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    bool isHiddenFakePlayerNameString(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void IdentityDefinition(IdentityDefinition const&);
    void IdentityDefinition(IdentityDefinition&&);
    bool isValid(void)const;
    void getScoreboardId(void)const;
    void getPlayerId(void)const;
    void getEntityId(void)const;
    void getName(std::function<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const& ()(ActorUniqueID)> const&)const;
    bool isPlayerType(void)const;
    void getIdentityType(void)const;
    bool isEntityType(void)const;
    bool isFakeType(void)const;
    bool isHiddenFakePlayerType(void)const;
    void convertFakeToReal(IdentityDefinition&, PlayerScoreboardId const&);
};
