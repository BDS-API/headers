#pragma once

#include <string>
#include "../mce/UUID.h"


class BossComponent {

public:
    BossComponent(BossComponent &&);
    void setHealthPercent(Actor &, float);
    void getColor()const;
    void getCreateWorldFog()const;
    void tryRemoveBoss(Actor &, Player &);
    void registerPlayer(Actor &, Player *);
    void addPlayerToParty(mce::UUID, int);
    void handleRegisterPlayers(Actor &);
//  void setColor(Actor &, BossBarColor); //TODO: incomplete function definition
    BossComponent();
    void getPlayerParty()const;
//  void broadcastBossEvent(Actor &, BossEventUpdateType); //TODO: incomplete function definition
    ~BossComponent();
    void getOverlay()const;
    void sendDeathTelemetry(Actor &);
    void getLastHealth()const;
    std::string getName()const;
    void unRegisterPlayer(Actor &, Player *);
    void getHealthPercent()const;
    void setCreateWorldFog(Actor &, bool);
    void getHealthBarVisible()const;
    void getLastPlayerUpdate()const;
    void getShouldDarkenSky()const;
//  void setOverlay(Actor &, BossBarOverlay); //TODO: incomplete function definition
    void setLastHealth(int);
    void getHudRangeSqr()const;
    bool isWithinRange(Actor &, Player const*)const;
//  void setLastPlayerUpdate(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>); //TODO: incomplete function definition
    void setHealthBarVisible(Actor &, bool);
//  void _sendBossEvent(Actor &, BossEventUpdateType, Player *); //TODO: incomplete function definition
};
