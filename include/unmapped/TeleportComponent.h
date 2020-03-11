#pragma once

#include "../bedrock/util/Vec3.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/description/component/TeleportDescription.h"
#include "./TeleportComponent.h"


class TeleportComponent {

public:

    TeleportComponent(TeleportComponent &&);
    TeleportComponent();
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
