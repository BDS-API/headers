#pragma once

#include "../bedrock/actor/Player.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include "../bedrock/actor/Mob.h"
#include "Village.h"
#include <memory>
#include "Raid.h"
#include "../bedrock/util/AABB.h"


class RaidBossComponent {

public:
    void getHealthPercent();
    void setVillage(std::weak_ptr<Village>);
    void updateName(Actor &);
    void getVillage();
    void registerPlayer(Player *);
    void getBossBarVisibleBounds();
    void updateBossBarStats(Actor &, Raid const&);
//  void _sendBossEvent(BossEventUpdateType, Player &); //TODO: incomplete function definition
    void sendRegistryMessages(Actor &);
    void setBossBarVisibleBounds(AABB);
    void setupBossBarInfo(Actor &, std::shared_ptr<Village>);
    void getRaidInProgress();
    void removeBossBar(Actor &);
    RaidBossComponent(RaidBossComponent &&);
    ~RaidBossComponent();
    std::string getName();
    void _handleRegisterPlayers(Actor &);
    void initialize(ActorUniqueID);
//  void _broadcastBossEvent(BossEventUpdateType, Actor &); //TODO: incomplete function definition
    bool isWithinRange(Mob const&);
    void setWaveStarted(bool);
    void getOwnerUniqueID();
    void unRegisterPlayer(Player *);
    void getColor();
    void getWaveStarted();
    void setRaidInProgress(bool);
    void updatePercent(float, Actor &);
    RaidBossComponent();
    void updateHealthBarVisible(bool, Actor &);
};
