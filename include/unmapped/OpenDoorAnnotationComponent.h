#pragma once

#include "../bedrock/util/BlockPos.h"


class OpenDoorAnnotationComponent {

public:
    void initFromDefinition(Actor &);
    void _cleanUp(Mob const&);
    void onComponentRemoved(EntityContext &);
    OpenDoorAnnotationComponent();
    void checkPath(Mob &);
    ~OpenDoorAnnotationComponent();
    void _tryToggleDoorState(Block const&, Mob const&, BlockPos)const;
    OpenDoorAnnotationComponent(OpenDoorAnnotationComponent &&);
};
