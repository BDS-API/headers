#pragma once

class IdentityDictionary {

public:

    void IdentityDictionary(void);
    bool isTracked(PlayerScoreboardId const&)const;
    bool isTracked(ActorUniqueID const&)const;
    bool isTracked(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    bool isTracked(ScoreboardId const&)const;
    void getScoreboardId(PlayerScoreboardId const&)const;
    void getScoreboardId(ActorUniqueID const&)const;
    void getScoreboardId(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void registerIdentity(ScoreboardId const&, PlayerScoreboardId const&);
    void registerIdentity(ScoreboardId const&, ActorUniqueID const&);
    void registerIdentity(ScoreboardId const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void clearIdentity(ScoreboardId const&);
    void getScoreboardIds(IdentityDefinition::Type)const;
    void getAllScoreboardIds(void)const;
    void getNumTrackedIdentities(void)const;
    void shouldConvertFakePlayer(PlayerScoreboardId const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void convertFakeToReal(ScoreboardId const&, PlayerScoreboardId const&);
    void _trackIdInTargetDict(ScoreboardId const&, PlayerScoreboardId const&);
    void _trackIdInTargetDict(ScoreboardId const&, ActorUniqueID const&);
    void _trackIdInTargetDict(ScoreboardId const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
};
