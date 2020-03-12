#pragma once

#include "../bedrock/actor/Player.h"
#include "../mce/UUID.h"
#include <ratio>
#include "../bedrock/actor/Actor.h"


class BossComponent {

public:
    void setHealthBarVisible(Actor &, bool);
    std::string getName()const;
//  void setOverlay(Actor &, BossBarOverlay); //TODO: incomplete function definition
//  void broadcastBossEvent(Actor &, BossEventUpdateType); //TODO: incomplete function definition
//  void setLastPlayerUpdate(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>); //TODO: incomplete function definition
    void getShouldDarkenSky()const;
    void unRegisterPlayer(Actor &, Player *);
    void getHealthPercent()const;
    bool isWithinRange(Actor &, Player const*)const;
    void handleRegisterPlayers(Actor &);
    void getPlayerParty()const;
    BossComponent();
    void tryRemoveBoss(Actor &, Player &);
    ~BossComponent();
    void setCreateWorldFog(Actor &, bool);
//  void _sendBossEvent(Actor &, BossEventUpdateType, Player *); //TODO: incomplete function definition
    void sendDeathTelemetry(Actor &);
    void getLastPlayerUpdate()const;
    void getLastHealth()const;
    void registerPlayer(Actor &, Player *);
    void getHudRangeSqr()const;
    void setHealthPercent(Actor &, float);
    void getHealthBarVisible()const;
    BossComponent(BossComponent &&);
//  void setColor(Actor &, BossBarColor); //TODO: incomplete function definition
    void addPlayerToParty(mce::UUID, int);
    void setLastHealth(int);
    void getCreateWorldFog()const;
    void getOverlay()const;
    void getColor()const;
};
