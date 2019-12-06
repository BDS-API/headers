#pragma once

class ShareItemsGoal : Goal {

public:
    virtual ~ShareItemsGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;

    void ShareItemsGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&, float, int, float);
    void selectEntityToShareWith(std::vector<std::pair<int, ItemStack>, std::allocator<std::pair<int, ItemStack>>> const&);
};
