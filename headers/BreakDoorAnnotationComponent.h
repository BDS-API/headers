#pragma once

class BreakDoorAnnotationComponent {

public:

    void BreakDoorAnnotationComponent(BreakDoorAnnotationComponent&&);
    void BreakDoorAnnotationComponent(void);
    void initFromDefinition(Actor &);
    void onComponentRemoved(EntityContext &);
    void _cleanUp(Mob &);
    void obstructionCheck(Mob &);
    void _shouldBreakDoor(Mob &);
    void clearProgress(Mob &);
    bool canMobBreakDoor(Mob &, Path const&)const;
};
