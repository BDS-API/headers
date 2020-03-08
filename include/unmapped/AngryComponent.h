#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/actor/Mob"


class AngryComponent {

public:

    AngryComponent(AngryComponent&&);
    AngryComponent(void);
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
    bool canAttack(Mob &, Mob*, Actor *, bool, bool);
};
