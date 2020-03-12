#pragma once

#include "MobEffect.h"
#include <string>


class InstantaneousMobEffect : MobEffect {

public:
    ~InstantaneousMobEffect();
    virtual bool isDurationEffectTick(int, int)const;
    virtual bool isInstantaneous()const;
    InstantaneousMobEffect(int, std::string const&, std::string const&, bool, int, int);
};
