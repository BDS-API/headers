#pragma once

class ActorDefinitionDescriptor {

public:

    void combine(ActorDefinitionDescriptor const&);
    void subtract(ActorDefinitionDescriptor const&);
    void contains(ActorDefinitionDescriptor const&)const;
    void overlaps(ActorDefinitionDescriptor const&)const;
    void empty(void)const;
    bool hasComponent(Util::HashString const&)const;
    void executeEvent(Actor &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, VariantParameterList const&);
    void executeTrigger(Actor &, DefinitionTrigger const&, VariantParameterList const&);
    void forceExecuteTrigger(Actor &, DefinitionTrigger const&, VariantParameterList const&);
    void ActorDefinitionDescriptor(void);
    void ActorDefinitionDescriptor(ActorDefinitionDescriptor&&);
};
