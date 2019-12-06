#pragma once

class OpenDoorAnnotationComponent {

public:

    void OpenDoorAnnotationComponent(OpenDoorAnnotationComponent&&);
    void OpenDoorAnnotationComponent(void);
    void initFromDefinition(Actor &);
    void onComponentRemoved(EntityContext &);
    void _tryToggleDoorState(Block const&, Mob const&, BlockPos)const;
    void _cleanUp(Mob const&);
    void checkPath(Mob &);
};
