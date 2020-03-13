#pragma once

#include "../bedrock/util/AABB.h"
#include <memory>
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include <string>


class RaidBossComponent {

public:
    ~RaidBossComponent(); // _ZN17RaidBossComponentD2Ev
    RaidBossComponent(RaidBossComponent &&); // _ZN17RaidBossComponentC2EOS_
    RaidBossComponent(); // _ZN17RaidBossComponentC2Ev
    void initialize(ActorUniqueID); // _ZN17RaidBossComponent10initializeE13ActorUniqueID
    void updateName(Actor &); // _ZN17RaidBossComponent10updateNameER5Actor
//  void _broadcastBossEvent(BossEventUpdateType, Actor &); //TODO: incomplete function definition // _ZN17RaidBossComponent19_broadcastBossEventE19BossEventUpdateTypeR5Actor
    void updateHealthBarVisible(bool, Actor &); // _ZN17RaidBossComponent22updateHealthBarVisibleEbR5Actor
    void setupBossBarInfo(Actor &, std::shared_ptr<Village>); // _ZN17RaidBossComponent16setupBossBarInfoER5ActorSt10shared_ptrI7VillageE
    void setRaidInProgress(bool); // _ZN17RaidBossComponent17setRaidInProgressEb
    void setBossBarVisibleBounds(AABB); // _ZN17RaidBossComponent23setBossBarVisibleBoundsE4AABB
    void getColor(); // _ZN17RaidBossComponent8getColorEv
    std::string getName(); // _ZN17RaidBossComponent7getNameB5cxx11Ev
    void getVillage(); // _ZN17RaidBossComponent10getVillageEv
    bool isWithinRange(Mob const&); // _ZN17RaidBossComponent13isWithinRangeERK3Mob
    void getBossBarVisibleBounds(); // _ZN17RaidBossComponent23getBossBarVisibleBoundsEv
    void updateBossBarStats(Actor &, Raid const&); // _ZN17RaidBossComponent18updateBossBarStatsER5ActorRK4Raid
    void updatePercent(float, Actor &); // _ZN17RaidBossComponent13updatePercentEfR5Actor
    void setVillage(std::weak_ptr<Village>); // _ZN17RaidBossComponent10setVillageESt8weak_ptrI7VillageE
    void removeBossBar(Actor &); // _ZN17RaidBossComponent13removeBossBarER5Actor
    void sendRegistryMessages(Actor &); // _ZN17RaidBossComponent20sendRegistryMessagesER5Actor
    void _handleRegisterPlayers(Actor &); // _ZN17RaidBossComponent22_handleRegisterPlayersER5Actor
    void getHealthPercent(); // _ZN17RaidBossComponent16getHealthPercentEv
    void getOwnerUniqueID(); // _ZN17RaidBossComponent16getOwnerUniqueIDEv
//  void _sendBossEvent(BossEventUpdateType, Player &); //TODO: incomplete function definition // _ZN17RaidBossComponent14_sendBossEventE19BossEventUpdateTypeR6Player
    void registerPlayer(Player *); // _ZN17RaidBossComponent14registerPlayerEP6Player
    void unRegisterPlayer(Player *); // _ZN17RaidBossComponent16unRegisterPlayerEP6Player
    void getWaveStarted(); // _ZN17RaidBossComponent14getWaveStartedEv
    void getRaidInProgress(); // _ZN17RaidBossComponent17getRaidInProgressEv
    void setWaveStarted(bool); // _ZN17RaidBossComponent14setWaveStartedEb
};
