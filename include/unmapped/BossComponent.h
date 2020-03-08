#pragma once

#include "../mce/UUID"
#include "../bedrock/actor/Actor"
#include "../bedrock/actor/Player"


class BossComponent {

public:

    BossComponent(BossComponent&&);
    BossComponent(void);
    void getShouldDarkenSky()const;
    void registerPlayer(Actor &, Player *);
    void unRegisterPlayer(Actor &, Player *);
    void getHealthBarVisible()const;
    void setHealthBarVisible(Actor &, bool);
    void broadcastBossEvent(Actor &, BossEventUpdateType);
    void getHealthPercent()const;
    void setHealthPercent(Actor &, float);
    void setColor(Actor &, BossBarColor);
    void getColor()const;
    void getHudRangeSqr()const;
    void getOverlay()const;
    void setOverlay(Actor &, BossBarOverlay);
    void getCreateWorldFog()const;
    void setCreateWorldFog(Actor &, bool);
    void getLastHealth()const;
    void setLastHealth(int);
    void getLastPlayerUpdate()const;
    void setLastPlayerUpdate(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>);
    bool isWithinRange(Actor &, Player const*)const;
    void getPlayerParty()const;
    void addPlayerToParty(mce::UUID, int);
    void sendDeathTelemetry(Actor &);
    void _sendBossEvent(Actor &, BossEventUpdateType, Player *);
    void handleRegisterPlayers(Actor &);
    void tryRemoveBoss(Actor &, Player &);
};
