#pragma once

class NearestAttackableTargetGoal : TargetGoal {

public:
    virtual ~NearestAttackableTargetGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void appendDebugInfo(std::string &)const;
    virtual void _findTarget(MobDescriptor const**);

    void NearestAttackableTargetGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&, float, int, bool, int, bool, bool, int, float, bool, int);
    void _canStartSearching(void);
    void _selectTarget(void);
    void _isTargetVisible(Mob const&, float, float)const;
    void _getNearbyActors(void);
    void _applyPlayerVisibilityModifier(Player const&, float &)const;
};
