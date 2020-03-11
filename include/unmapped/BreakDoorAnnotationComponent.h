#pragma once

#include "../bedrock/actor/Actor.h"
#include "./BreakDoorAnnotationComponent.h"
#include "../bedrock/actor/Mob.h"
#include "./EntityContext.h"
#include "./Path.h"


class BreakDoorAnnotationComponent {

public:

    BreakDoorAnnotationComponent(BreakDoorAnnotationComponent &&);
    BreakDoorAnnotationComponent();
    void initFromDefinition(Actor &);
    void onComponentRemoved(EntityContext &);
    void _cleanUp(Mob &);
    void obstructionCheck(Mob &);
    void _shouldBreakDoor(Mob &);
    void clearProgress(Mob &);
    bool canMobBreakDoor(Mob &, Path const&)const;
};
