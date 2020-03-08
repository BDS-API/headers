#pragma once

#include "../bedrock/actor/unmapped/ActorUniqueID"


class IdentityDictionary {

public:

    IdentityDictionary(void);
    bool isTracked(PlayerScoreboardId const&)const;
    bool isTracked(ActorUniqueID const&)const;
    bool isTracked(std::string const&)const;
    bool isTracked(ScoreboardId const&)const;
    void getScoreboardId(PlayerScoreboardId const&)const;
    void getScoreboardId(ActorUniqueID const&)const;
    void getScoreboardId(std::string const&)const;
    void registerIdentity(ScoreboardId const&, PlayerScoreboardId const&);
    void registerIdentity(ScoreboardId const&, ActorUniqueID const&);
    void registerIdentity(ScoreboardId const&, std::string const&);
    void clearIdentity(ScoreboardId const&);
    void getScoreboardIds(IdentityDefinition::Type)const;
    void getAllScoreboardIds()const;
    void getNumTrackedIdentities()const;
    void shouldConvertFakePlayer(PlayerScoreboardId const&, std::string const&);
    void convertFakeToReal(ScoreboardId const&, PlayerScoreboardId const&);
    void _trackIdInTargetDict(ScoreboardId const&, PlayerScoreboardId const&);
    void _trackIdInTargetDict(ScoreboardId const&, ActorUniqueID const&);
    void _trackIdInTargetDict(ScoreboardId const&, std::string const&);
};
