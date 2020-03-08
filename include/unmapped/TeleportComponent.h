#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/description/component/TeleportDescription"
#include "../bedrock/util/Vec3"


class TeleportComponent {

public:

    TeleportComponent(TeleportComponent&&);
    TeleportComponent(void);
    void initFromDefinition(Actor &);
    void initFromDefinition(TeleportDescription const&);
    void teleport(Actor &, Vec3 const&);
    void randomTeleport(Actor &);
    void teleportTowards(Actor &, Actor const&);
    void getRandomTeleports();
    void getMinTeleportTime();
    void getMaxTeleportTime();
    void getTargetDistance();
    void getTargetTeleportChance();
    void getLightTeleportChance();
    void getDarkTeleportChance();
    void getTeleportTime();
    void setTeleportTime(int);
};
