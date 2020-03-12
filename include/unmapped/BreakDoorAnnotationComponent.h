#pragma once



class BreakDoorAnnotationComponent {

public:
    BreakDoorAnnotationComponent();
    void _cleanUp(Mob &);
    void onComponentRemoved(EntityContext &);
    void obstructionCheck(Mob &);
    void clearProgress(Mob &);
    void initFromDefinition(Actor &);
    bool canMobBreakDoor(Mob &, Path const&)const;
    void _shouldBreakDoor(Mob &);
    BreakDoorAnnotationComponent(BreakDoorAnnotationComponent &&);
};
