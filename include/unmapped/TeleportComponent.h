#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/description/component/TeleportDescription"


class TeleportComponent {

public:

    TeleportComponent(TeleportComponent&&);
    TeleportComponent(void);
    void initFromDefinition(Actor &);
    void initFromDefinition(TeleportDescription const&);
    void teleport(Actor &, Vec3 const&);
    void randomTeleport(Actor &);
    void teleportTowards(Actor &, Actor const&);
    void getRandomTeleports(void);
    void getMinTeleportTime(void);
    void getMaxTeleportTime(void);
    void getTargetDistance(void);
    void getTargetTeleportChance(void);
    void getLightTeleportChance(void);
    void getDarkTeleportChance(void);
    void getTeleportTime(void);
    void setTeleportTime(int);
};
