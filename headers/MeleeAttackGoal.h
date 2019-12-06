#pragma once

class MeleeAttackGoal : Goal {

public:
    static long MeleeAttackGoal::ATTACK_LOOK_DISTANCE;
    static long MeleeAttackGoal::MIN_RECALC_TIME;
    static long MeleeAttackGoal::MAX_RECALC_TIME;
    static long MeleeAttackGoal::VERY_FAR_DISTANCE_SQUARED;
    static long MeleeAttackGoal::FAR_DISTANCE_SQUARED;
    static long MeleeAttackGoal::VERY_FAR_DISTANCE_RECALC_TIME_INCREASE;
    static long MeleeAttackGoal::FAR_DISTANCE_RECALC_TIME_INCREASE;
    static long MeleeAttackGoal::DEFAULT_RECALC_TIME;

    virtual ~MeleeAttackGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void _getAttackReachSqr(void);
    virtual void _lookAtTarget(Actor *)const;
    virtual void _mobCanPathToTarget(Actor const*)const;
    virtual void _shouldRecalculatePath(Actor const*);
    virtual void _recalculateTargetPosition(Actor const*);
    virtual void _adjustTimeToRecalculatePath(float);
    virtual void _attemptPathToTarget(Actor *);
    virtual void _attemptAttackTarget(Actor *);

    void MeleeAttackGoal(Mob &, float, bool, float, ActorCategory, int, float, bool, bool);
    void _getAttackReach(void);
};
