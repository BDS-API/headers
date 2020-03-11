#pragma once

#include "./OpenDoorAnnotationComponent.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/actor/Mob.h"
#include "./Block.h"
#include "./EntityContext.h"
#include "../bedrock/util/BlockPos.h"


class OpenDoorAnnotationComponent {

public:

    ~OpenDoorAnnotationComponent();
    OpenDoorAnnotationComponent(OpenDoorAnnotationComponent &&);
    OpenDoorAnnotationComponent();
    void initFromDefinition(Actor &);
    void onComponentRemoved(EntityContext &);
    void _tryToggleDoorState(Block const&, Mob const&, BlockPos)const;
    void _cleanUp(Mob const&);
    void checkPath(Mob &);
};
