#pragma once



class BreakDoorAnnotationComponent {

public:
    BreakDoorAnnotationComponent(BreakDoorAnnotationComponent &&); // _ZN28BreakDoorAnnotationComponentC2EOS_
    BreakDoorAnnotationComponent(); // _ZN28BreakDoorAnnotationComponentC2Ev
    void initFromDefinition(Actor &); // _ZN28BreakDoorAnnotationComponent18initFromDefinitionER5Actor
    void onComponentRemoved(EntityContext &); // _ZN28BreakDoorAnnotationComponent18onComponentRemovedER13EntityContext
    void _cleanUp(Mob &); // _ZN28BreakDoorAnnotationComponent8_cleanUpER3Mob
    void obstructionCheck(Mob &); // _ZN28BreakDoorAnnotationComponent16obstructionCheckER3Mob
    void _shouldBreakDoor(Mob &); // _ZN28BreakDoorAnnotationComponent16_shouldBreakDoorER3Mob
    void clearProgress(Mob &); // _ZN28BreakDoorAnnotationComponent13clearProgressER3Mob
    bool canMobBreakDoor(Mob &, Path const&)const; // _ZNK28BreakDoorAnnotationComponent15canMobBreakDoorER3MobRK4Path
};
