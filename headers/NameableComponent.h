#pragma once

class NameableComponent {

public:

    void NameableComponent(NameableComponent&&);
    void NameableComponent(void);
    void initFromDefinition(Actor &);
    void initFromDefinition(Actor &, NameableDescription const&);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void getAlwaysShow(void);
    void nameEntity(Actor &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
};
