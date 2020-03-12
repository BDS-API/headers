#pragma once

#include "../bedrock/actor/Actor.h"
#include "../bedrock/actor/Mob.h"
#include "../bedrock/util/BlockPos.h"
#include "Block.h"
#include "EntityContext.h"


class OpenDoorAnnotationComponent {

public:
    void _cleanUp(Mob const&);
    void onComponentRemoved(EntityContext &);
    ~OpenDoorAnnotationComponent();
    OpenDoorAnnotationComponent();
    OpenDoorAnnotationComponent(OpenDoorAnnotationComponent &&);
    void _tryToggleDoorState(Block const&, Mob const&, BlockPos)const;
    void checkPath(Mob &);
    void initFromDefinition(Actor &);
};
