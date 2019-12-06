#pragma once

class SummonActorGoal : Goal {

public:
    virtual ~SummonActorGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;

    void SummonActorGoal(Mob &, std::vector<SummonSpellData, std::allocator<SummonSpellData>> const&);
    void _selectBestSpell(Actor &)const;
    void _getCurrentSpell(void)const;
    void _createSpellEntity(float, float, float, float, float, int, ActorDefinitionIdentifier)const;
};
