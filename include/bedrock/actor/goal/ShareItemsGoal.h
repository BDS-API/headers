#pragma once

class ShareItemsGoal : Goal {

public:
    virtual ShareItemsGoal::~ShareItemsGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    ShareItemsGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&, float, int, float);
    void selectEntityToShareWith(std::vector<std::pair<int, ItemStack>, std::allocator<std::pair<int, ItemStack>>> const&);
};
