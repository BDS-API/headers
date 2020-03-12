#pragma once

#include "Path.h"
#include "EntityContext.h"
#include "../bedrock/actor/Mob.h"
#include "../bedrock/actor/Actor.h"


class BreakDoorAnnotationComponent {

public:
    void clearProgress(Mob &);
    void obstructionCheck(Mob &);
    bool canMobBreakDoor(Mob &, Path const&)const;
    void initFromDefinition(Actor &);
    void _cleanUp(Mob &);
    void onComponentRemoved(EntityContext &);
    BreakDoorAnnotationComponent(BreakDoorAnnotationComponent &&);
    void _shouldBreakDoor(Mob &);
    BreakDoorAnnotationComponent();
};
