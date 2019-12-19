#pragma once

class RandomSwimmingGoal : RandomStrollGoal {

public:
    virtual RandomSwimmingGoal::~RandomSwimmingGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void appendDebugInfo(std::string &)const;
    virtual void _setWantedPosition(void);

    RandomSwimmingGoal(Mob &, float, int, int, int);
    void _getWaterHeights(BlockPos, short &, float &, float &, float &);
};
