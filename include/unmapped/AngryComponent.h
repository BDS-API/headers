#pragma once

#include "../bedrock/actor/Actor.h"
#include "./AngryComponent.h"
#include "../bedrock/actor/Mob.h"


class AngryComponent {

public:

    ~AngryComponent();
    AngryComponent(AngryComponent &&);
    AngryComponent();
    void initFromDefinition(Actor &);
    void getHasTicked()const;
    void getBroadcastAnger()const;
    void getBroadcastRange()const;
    void getBroadcastFilter()const;
    void setHasTicked(bool);
    void setBroadcastAnger(bool);
    void setBroadcastRange(int);
    void restartTimer(Mob &);
    void setAngry(Mob &, bool);
    bool canAttack(Mob &, Mob *, Actor *, bool, bool);
};
