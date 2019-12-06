#pragma once

class InstantaneousMobEffect : MobEffect {

public:
    virtual ~InstantaneousMobEffect();
    virtual bool isInstantaneous(void)const;
    virtual bool isDurationEffectTick(int, int)const;

    void InstantaneousMobEffect(int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool, int, int);
};
