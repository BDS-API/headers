#pragma once

#include "../bedrock/util/Vec3.h"
#include "../bedrock/description/component/TeleportDescription.h"
#include "../bedrock/actor/Actor.h"


class TeleportComponent {

public:
    void setTeleportTime(int);
    void randomTeleport(Actor &);
    void initFromDefinition(Actor &);
    void getRandomTeleports();
    void getTargetTeleportChance();
    void getLightTeleportChance();
    void teleport(Actor &, Vec3 const&);
    void getTargetDistance();
    void getDarkTeleportChance();
    TeleportComponent(TeleportComponent &&);
    void teleportTowards(Actor &, Actor const&);
    void getTeleportTime();
    void getMinTeleportTime();
    void initFromDefinition(TeleportDescription const&);
    TeleportComponent();
    void getMaxTeleportTime();
};
