#pragma once

#include "../bedrock/actor/Mob"
#include "../bedrock/actor/Actor"


class AngryComponent {

public:

    AngryComponent(AngryComponent&&);
    AngryComponent(void);
    void initFromDefinition(Actor &);
    void getHasTicked(void)const;
    void getBroadcastAnger(void)const;
    void getBroadcastRange(void)const;
    void getBroadcastFilter(void)const;
    void setHasTicked(bool);
    void setBroadcastAnger(bool);
    void setBroadcastRange(int);
    void restartTimer(Mob &);
    void setAngry(Mob &, bool);
    bool canAttack(Mob &, Mob*, Actor *, bool, bool);
};
