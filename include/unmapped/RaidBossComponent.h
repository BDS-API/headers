#pragma once

#include <memory>
#include <string>
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include "../bedrock/util/AABB.h"


class RaidBossComponent {

public:
    void setVillage(std::weak_ptr<Village>);
    void getOwnerUniqueID();
    void unRegisterPlayer(Player *);
    RaidBossComponent(RaidBossComponent &&);
//  void _broadcastBossEvent(BossEventUpdateType, Actor &); //TODO: incomplete function definition
    void setWaveStarted(bool);
    void updateBossBarStats(Actor &, Raid const&);
    void setRaidInProgress(bool);
    void setBossBarVisibleBounds(AABB);
    bool isWithinRange(Mob const&);
    void updatePercent(float, Actor &);
//  void _sendBossEvent(BossEventUpdateType, Player &); //TODO: incomplete function definition
    void getBossBarVisibleBounds();
    void setupBossBarInfo(Actor &, std::shared_ptr<Village>);
    ~RaidBossComponent();
    void updateHealthBarVisible(bool, Actor &);
    void sendRegistryMessages(Actor &);
    void getWaveStarted();
    void getHealthPercent();
    void registerPlayer(Player *);
    void getVillage();
    void updateName(Actor &);
    std::string getName();
    void getColor();
    void _handleRegisterPlayers(Actor &);
    void getRaidInProgress();
    RaidBossComponent();
    void removeBossBar(Actor &);
    void initialize(ActorUniqueID);
};
