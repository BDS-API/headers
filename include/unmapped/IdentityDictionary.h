#pragma once

#include "./ScoreboardId.h"
#include "./PlayerScoreboardId.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include <string>


class IdentityDictionary {

public:

    IdentityDictionary();
    ~IdentityDictionary();
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
//  void getScoreboardIds(IdentityDefinition::Type)const; //TODO: incomplete function definition
    void getAllScoreboardIds()const;
    void getNumTrackedIdentities()const;
    void shouldConvertFakePlayer(PlayerScoreboardId const&, std::string const&);
    void convertFakeToReal(ScoreboardId const&, PlayerScoreboardId const&);
    void _trackIdInTargetDict(ScoreboardId const&, PlayerScoreboardId const&);
    void _trackIdInTargetDict(ScoreboardId const&, ActorUniqueID const&);
    void _trackIdInTargetDict(ScoreboardId const&, std::string const&);
};
