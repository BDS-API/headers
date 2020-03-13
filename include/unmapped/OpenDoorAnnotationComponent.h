#pragma once

#include "../bedrock/util/BlockPos.h"


class OpenDoorAnnotationComponent {

public:
    ~OpenDoorAnnotationComponent(); // _ZN27OpenDoorAnnotationComponentD2Ev
    OpenDoorAnnotationComponent(OpenDoorAnnotationComponent &&); // _ZN27OpenDoorAnnotationComponentC2EOS_
    OpenDoorAnnotationComponent(); // _ZN27OpenDoorAnnotationComponentC2Ev
    void initFromDefinition(Actor &); // _ZN27OpenDoorAnnotationComponent18initFromDefinitionER5Actor
    void onComponentRemoved(EntityContext &); // _ZN27OpenDoorAnnotationComponent18onComponentRemovedER13EntityContext
    void _tryToggleDoorState(Block const&, Mob const&, BlockPos)const; // _ZNK27OpenDoorAnnotationComponent19_tryToggleDoorStateERK5BlockRK3Mob8BlockPos
    void _cleanUp(Mob const&); // _ZN27OpenDoorAnnotationComponent8_cleanUpERK3Mob
    void checkPath(Mob &); // _ZN27OpenDoorAnnotationComponent9checkPathER3Mob
};
