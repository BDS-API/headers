#pragma once

#include "../mce/UUID.h"
#include "./BossComponent.h"
#include <ratio>
#include "../bedrock/actor/Actor.h"
#include "../bedrock/actor/Player.h"
#include <string>


class BossComponent {

public:

    ~BossComponent();
    BossComponent(BossComponent &&);
    BossComponent();
    void getShouldDarkenSky()const;
    void registerPlayer(Actor &, Player *);
    void unRegisterPlayer(Actor &, Player *);
    void getHealthBarVisible()const;
    void setHealthBarVisible(Actor &, bool);
//  void broadcastBossEvent(Actor &, BossEventUpdateType); //TODO: incomplete function definition
    std::string getName()const;
    void getHealthPercent()const;
    void setHealthPercent(Actor &, float);
//  void setColor(Actor &, BossBarColor); //TODO: incomplete function definition
    void getColor()const;
    void getHudRangeSqr()const;
    void getOverlay()const;
//  void setOverlay(Actor &, BossBarOverlay); //TODO: incomplete function definition
    void getCreateWorldFog()const;
    void setCreateWorldFog(Actor &, bool);
    void getLastHealth()const;
    void setLastHealth(int);
    void getLastPlayerUpdate()const;
//  void setLastPlayerUpdate(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>); //TODO: incomplete function definition
    bool isWithinRange(Actor &, Player const*)const;
    void getPlayerParty()const;
    void addPlayerToParty(mce::UUID, int);
    void sendDeathTelemetry(Actor &);
//  void _sendBossEvent(Actor &, BossEventUpdateType, Player *); //TODO: incomplete function definition
    void handleRegisterPlayers(Actor &);
    void tryRemoveBoss(Actor &, Player &);
};
