#pragma once

#include "./MobEffect.h"
#include <string>


class InstantaneousMobEffect : MobEffect {

public:
    virtual ~InstantaneousMobEffect();
    virtual bool isInstantaneous()const;
    virtual bool isDurationEffectTick(int, int)const;

    InstantaneousMobEffect(int, std::string const&, std::string const&, bool, int, int);
};
