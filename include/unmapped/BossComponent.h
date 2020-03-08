#pragma once

#include "../bedrock/actor/Actor"
#include "../mce/UUID"


class BossComponent {

public:

    BossComponent(BossComponent&&);
    BossComponent(void);
    void getShouldDarkenSky(void)const;
    void registerPlayer(Actor &, Player *);
    void unRegisterPlayer(Actor &, Player *);
    void getHealthBarVisible(void)const;
    void setHealthBarVisible(Actor &, bool);
    void broadcastBossEvent(Actor &, BossEventUpdateType);
    void getHealthPercent(void)const;
    void setHealthPercent(Actor &, float);
    void setColor(Actor &, BossBarColor);
    void getColor(void)const;
    void getHudRangeSqr(void)const;
    void getOverlay(void)const;
    void setOverlay(Actor &, BossBarOverlay);
    void getCreateWorldFog(void)const;
    void setCreateWorldFog(Actor &, bool);
    void getLastHealth(void)const;
    void setLastHealth(int);
    void getLastPlayerUpdate(void)const;
    void setLastPlayerUpdate(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>);
    bool isWithinRange(Actor &, Player const*)const;
    void getPlayerParty(void)const;
    void addPlayerToParty(mce::UUID, int);
    void sendDeathTelemetry(Actor &);
    void _sendBossEvent(Actor &, BossEventUpdateType, Player *);
    void handleRegisterPlayers(Actor &);
    void tryRemoveBoss(Actor &, Player &);
};
