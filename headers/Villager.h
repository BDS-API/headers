#pragma once

class Villager : VillagerBase {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual ~Villager();
    virtual void buildDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;

    void Villager(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
