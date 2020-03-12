#pragma once

#include <string>


class IdentityDictionary {

public:
    IdentityDictionary();
    void registerIdentity(ScoreboardId const&, ActorUniqueID const&);
    void getAllScoreboardIds()const;
    ~IdentityDictionary();
    bool isTracked(PlayerScoreboardId const&)const;
    void getScoreboardId(std::string const&)const;
    bool isTracked(ActorUniqueID const&)const;
    void getNumTrackedIdentities()const;
    void convertFakeToReal(ScoreboardId const&, PlayerScoreboardId const&);
    bool isTracked(ScoreboardId const&)const;
    void _trackIdInTargetDict(ScoreboardId const&, ActorUniqueID const&);
    void _trackIdInTargetDict(ScoreboardId const&, std::string const&);
    void _trackIdInTargetDict(ScoreboardId const&, PlayerScoreboardId const&);
    void clearIdentity(ScoreboardId const&);
    void getScoreboardId(ActorUniqueID const&)const;
    void registerIdentity(ScoreboardId const&, PlayerScoreboardId const&);
    void getScoreboardId(PlayerScoreboardId const&)const;
    void registerIdentity(ScoreboardId const&, std::string const&);
//  void getScoreboardIds(IdentityDefinition::Type)const; //TODO: incomplete function definition
    bool isTracked(std::string const&)const;
    void shouldConvertFakePlayer(PlayerScoreboardId const&, std::string const&);
};
