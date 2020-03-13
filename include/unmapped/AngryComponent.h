#pragma once



class AngryComponent {

public:
    ~AngryComponent(); // _ZN14AngryComponentD2Ev
    AngryComponent(AngryComponent &&); // _ZN14AngryComponentC2EOS_
    AngryComponent(); // _ZN14AngryComponentC2Ev
    void initFromDefinition(Actor &); // _ZN14AngryComponent18initFromDefinitionER5Actor
    void getHasTicked()const; // _ZNK14AngryComponent12getHasTickedEv
    void getBroadcastAnger()const; // _ZNK14AngryComponent17getBroadcastAngerEv
    void getBroadcastRange()const; // _ZNK14AngryComponent17getBroadcastRangeEv
    void getBroadcastFilter()const; // _ZNK14AngryComponent18getBroadcastFilterEv
    void setHasTicked(bool); // _ZN14AngryComponent12setHasTickedEb
    void setBroadcastAnger(bool); // _ZN14AngryComponent17setBroadcastAngerEb
    void setBroadcastRange(int); // _ZN14AngryComponent17setBroadcastRangeEi
    void restartTimer(Mob &); // _ZN14AngryComponent12restartTimerER3Mob
    void setAngry(Mob &, bool); // _ZN14AngryComponent8setAngryER3Mobb
    bool canAttack(Mob &, Mob *, Actor *, bool, bool); // _ZN14AngryComponent9canAttackER3MobPS0_P5Actorbb
};
