#pragma once

class RangedAttackGoal : Goal {

public:
    virtual RangedAttackGoal::~RangedAttackGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    RangedAttackGoal(Mob &, float, float, int, int, float, int, int, int, int);
    void _holdingUnchargedChargedItem(void)const;
    void handleAttackBehavior(Actor *, Vec3 const&, float, bool);
    void _dischargeCarriedItem(void);
    void handleChargeData(void);
    void determinePlaySound(void);
    void setAttackInterval(int);
};
