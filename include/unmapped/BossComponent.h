#pragma once

#include "../mce/UUID.h"
#include <string>


class BossComponent {

public:
    ~BossComponent(); // _ZN13BossComponentD2Ev
    BossComponent(BossComponent &&); // _ZN13BossComponentC2EOS_
    BossComponent(); // _ZN13BossComponentC2Ev
    void getShouldDarkenSky()const; // _ZNK13BossComponent18getShouldDarkenSkyEv
    void registerPlayer(Actor &, Player *); // _ZN13BossComponent14registerPlayerER5ActorP6Player
    void unRegisterPlayer(Actor &, Player *); // _ZN13BossComponent16unRegisterPlayerER5ActorP6Player
    void getHealthBarVisible()const; // _ZNK13BossComponent19getHealthBarVisibleEv
    void setHealthBarVisible(Actor &, bool); // _ZN13BossComponent19setHealthBarVisibleER5Actorb
//  void broadcastBossEvent(Actor &, BossEventUpdateType); //TODO: incomplete function definition // _ZN13BossComponent18broadcastBossEventER5Actor19BossEventUpdateType
    std::string getName()const; // _ZNK13BossComponent7getNameB5cxx11Ev
    void getHealthPercent()const; // _ZNK13BossComponent16getHealthPercentEv
    void setHealthPercent(Actor &, float); // _ZN13BossComponent16setHealthPercentER5Actorf
//  void setColor(Actor &, BossBarColor); //TODO: incomplete function definition // _ZN13BossComponent8setColorER5Actor12BossBarColor
    void getColor()const; // _ZNK13BossComponent8getColorEv
    void getHudRangeSqr()const; // _ZNK13BossComponent14getHudRangeSqrEv
    void getOverlay()const; // _ZNK13BossComponent10getOverlayEv
//  void setOverlay(Actor &, BossBarOverlay); //TODO: incomplete function definition // _ZN13BossComponent10setOverlayER5Actor14BossBarOverlay
    void getCreateWorldFog()const; // _ZNK13BossComponent17getCreateWorldFogEv
    void setCreateWorldFog(Actor &, bool); // _ZN13BossComponent17setCreateWorldFogER5Actorb
    void getLastHealth()const; // _ZNK13BossComponent13getLastHealthEv
    void setLastHealth(int); // _ZN13BossComponent13setLastHealthEi
    void getLastPlayerUpdate()const; // _ZNK13BossComponent19getLastPlayerUpdateEv
//  void setLastPlayerUpdate(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>); //TODO: incomplete function definition // _ZN13BossComponent19setLastPlayerUpdateENSt6chrono10time_pointINS0_3_V212steady_clockENS0_8durationIlSt5ratioILl1ELl1000000000EEEEEE
    bool isWithinRange(Actor &, Player const*)const; // _ZNK13BossComponent13isWithinRangeER5ActorPK6Player
    void getPlayerParty()const; // _ZNK13BossComponent14getPlayerPartyEv
    void addPlayerToParty(mce::UUID, int); // _ZN13BossComponent16addPlayerToPartyEN3mce4UUIDEi
    void sendDeathTelemetry(Actor &); // _ZN13BossComponent18sendDeathTelemetryER5Actor
//  void _sendBossEvent(Actor &, BossEventUpdateType, Player *); //TODO: incomplete function definition // _ZN13BossComponent14_sendBossEventER5Actor19BossEventUpdateTypeP6Player
    void handleRegisterPlayers(Actor &); // _ZN13BossComponent21handleRegisterPlayersER5Actor
    void tryRemoveBoss(Actor &, Player &); // _ZN13BossComponent13tryRemoveBossER5ActorR6Player
};
