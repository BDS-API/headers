#pragma once

#include <string>
#include "ScoreboardId.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include "PlayerScoreboardId.h"


class IdentityDictionary {

public:
    void convertFakeToReal(ScoreboardId const&, PlayerScoreboardId const&);
    void shouldConvertFakePlayer(PlayerScoreboardId const&, std::string const&);
    ~IdentityDictionary();
    bool isTracked(ScoreboardId const&)const;
    void registerIdentity(ScoreboardId const&, PlayerScoreboardId const&);
    IdentityDictionary();
    void _trackIdInTargetDict(ScoreboardId const&, ActorUniqueID const&);
    void _trackIdInTargetDict(ScoreboardId const&, PlayerScoreboardId const&);
    void clearIdentity(ScoreboardId const&);
    void _trackIdInTargetDict(ScoreboardId const&, std::string const&);
    void getNumTrackedIdentities()const;
    bool isTracked(ActorUniqueID const&)const;
    void getScoreboardId(std::string const&)const;
    void registerIdentity(ScoreboardId const&, std::string const&);
    void getScoreboardId(ActorUniqueID const&)const;
    void registerIdentity(ScoreboardId const&, ActorUniqueID const&);
    void getAllScoreboardIds()const;
    bool isTracked(PlayerScoreboardId const&)const;
//  void getScoreboardIds(IdentityDefinition::Type)const; //TODO: incomplete function definition
    bool isTracked(std::string const&)const;
    void getScoreboardId(PlayerScoreboardId const&)const;
};
