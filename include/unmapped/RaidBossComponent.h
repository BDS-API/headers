#pragma once

#include "./Raid.h"
#include "./Village.h"
#include <memory>
#include "../bedrock/util/AABB.h"
#include "../bedrock/actor/Actor.h"
#include "./RaidBossComponent.h"
#include "../bedrock/actor/Player.h"
#include "../bedrock/actor/Mob.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include <string>


class RaidBossComponent {

public:

    ~RaidBossComponent();
    RaidBossComponent(RaidBossComponent &&);
    RaidBossComponent();
    void initialize(ActorUniqueID);
    void updateName(Actor &);
//  void _broadcastBossEvent(BossEventUpdateType, Actor &); //TODO: incomplete function definition
    void updateHealthBarVisible(bool, Actor &);
    void setupBossBarInfo(Actor &, std::shared_ptr<Village>);
    void setRaidInProgress(bool);
    void setBossBarVisibleBounds(AABB);
    void getColor();
    std::string getName();
    void getVillage();
    bool isWithinRange(Mob const&);
    void getBossBarVisibleBounds();
    void updateBossBarStats(Actor &, Raid const&);
    void updatePercent(float, Actor &);
    void setVillage(std::weak_ptr<Village>);
    void removeBossBar(Actor &);
    void sendRegistryMessages(Actor &);
    void _handleRegisterPlayers(Actor &);
    void getHealthPercent();
    void getOwnerUniqueID();
//  void _sendBossEvent(BossEventUpdateType, Player &); //TODO: incomplete function definition
    void registerPlayer(Player *);
    void unRegisterPlayer(Player *);
    void getWaveStarted();
    void getRaidInProgress();
    void setWaveStarted(bool);
};
