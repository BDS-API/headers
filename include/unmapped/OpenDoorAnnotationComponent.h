#pragma once

class OpenDoorAnnotationComponent {

public:

    OpenDoorAnnotationComponent(OpenDoorAnnotationComponent&&);
    OpenDoorAnnotationComponent(void);
    void initFromDefinition(Actor &);
    void onComponentRemoved(EntityContext &);
    void _tryToggleDoorState(Block const&, Mob const&, BlockPos)const;
    void _cleanUp(Mob const&);
    void checkPath(Mob &);
};
