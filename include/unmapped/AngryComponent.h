#pragma once



class AngryComponent {

public:
    void setHasTicked(bool);
    void setBroadcastAnger(bool);
    void getHasTicked()const;
    void getBroadcastFilter()const;
    void setAngry(Mob &, bool);
    void getBroadcastAnger()const;
    AngryComponent();
    void getBroadcastRange()const;
    AngryComponent(AngryComponent &&);
    void setBroadcastRange(int);
    ~AngryComponent();
    void initFromDefinition(Actor &);
    void restartTimer(Mob &);
    bool canAttack(Mob &, Mob *, Actor *, bool, bool);
};
