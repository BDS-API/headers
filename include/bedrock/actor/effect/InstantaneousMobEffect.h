#pragma once

#include <string>
#include "MobEffect.h"


class InstantaneousMobEffect : MobEffect {

public:
    ~InstantaneousMobEffect();
    virtual bool isInstantaneous()const;
    virtual bool isDurationEffectTick(int, int)const;
    InstantaneousMobEffect(int, std::string const&, std::string const&, bool, int, int);
};
