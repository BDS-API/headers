#pragma once

#include "../bedrock/actor/Mob"
#include "../bedrock/actor/Actor"
#include "../bedrock/actor/Player"
#include "../bedrock/actor/unmapped/ActorUniqueID"
#include "../bedrock/util/AABB"


class RaidBossComponent {

public:

    RaidBossComponent(RaidBossComponent&&);
    RaidBossComponent(void);
    void initialize(ActorUniqueID);
    void updateName(Actor &);
    void _broadcastBossEvent(BossEventUpdateType, Actor &);
    void updateHealthBarVisible(bool, Actor &);
    void setupBossBarInfo(Actor &, std::shared_ptr<Village>);
    void setRaidInProgress(bool);
    void setBossBarVisibleBounds(AABB);
    void getColor();
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
    void _sendBossEvent(BossEventUpdateType, Player &);
    void registerPlayer(Player *);
    void unRegisterPlayer(Player *);
    void getWaveStarted();
    void getRaidInProgress();
    void setWaveStarted(bool);
};
