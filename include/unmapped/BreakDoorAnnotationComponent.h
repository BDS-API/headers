#pragma once

#include "../bedrock/actor/Mob"
#include "../bedrock/actor/Actor"


class BreakDoorAnnotationComponent {

public:

    BreakDoorAnnotationComponent(BreakDoorAnnotationComponent&&);
    BreakDoorAnnotationComponent(void);
    void initFromDefinition(Actor &);
    void onComponentRemoved(EntityContext &);
    void _cleanUp(Mob &);
    void obstructionCheck(Mob &);
    void _shouldBreakDoor(Mob &);
    void clearProgress(Mob &);
    bool canMobBreakDoor(Mob &, Path const&)const;
};
