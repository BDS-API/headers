#pragma once

class RaidBossComponent {

public:

    void RaidBossComponent(RaidBossComponent&&);
    void RaidBossComponent(void);
    void initialize(ActorUniqueID);
    void updateName(Actor &);
    void _broadcastBossEvent(BossEventUpdateType, Actor &);
    void updateHealthBarVisible(bool, Actor &);
    void setupBossBarInfo(Actor &, std::shared_ptr<Village>);
    void setRaidInProgress(bool);
    void setBossBarVisibleBounds(AABB);
    void getColor(void);
    void getVillage(void);
    bool isWithinRange(Mob const&);
    void getBossBarVisibleBounds(void);
    void updateBossBarStats(Actor &, Raid const&);
    void updatePercent(float, Actor &);
    void setVillage(std::weak_ptr<Village>);
    void removeBossBar(Actor &);
    void sendRegistryMessages(Actor &);
    void _handleRegisterPlayers(Actor &);
    void getHealthPercent(void);
    void getOwnerUniqueID(void);
    void _sendBossEvent(BossEventUpdateType, Player &);
    void registerPlayer(Player *);
    void unRegisterPlayer(Player *);
    void getWaveStarted(void);
    void getRaidInProgress(void);
    void setWaveStarted(bool);
};
