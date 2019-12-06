#pragma once

class AbsorptionMobEffect : MobEffect {

public:
    virtual ~AbsorptionMobEffect();
    virtual void applyEffects(Actor *, int, int)const;
    virtual void removeEffects(Actor *);

    void AbsorptionMobEffect(int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool, int, int);
};
