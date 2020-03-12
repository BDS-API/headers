#pragma once

#include "../bedrock/actor/Mob.h"
#include "../bedrock/actor/Actor.h"


class AngryComponent {

public:
    ~AngryComponent();
    void setAngry(Mob &, bool);
    void setBroadcastRange(int);
    void getBroadcastRange()const;
    void getBroadcastFilter()const;
    void setHasTicked(bool);
    AngryComponent();
    AngryComponent(AngryComponent &&);
    void getBroadcastAnger()const;
    bool canAttack(Mob &, Mob *, Actor *, bool, bool);
    void getHasTicked()const;
    void setBroadcastAnger(bool);
    void restartTimer(Mob &);
    void initFromDefinition(Actor &);
};
