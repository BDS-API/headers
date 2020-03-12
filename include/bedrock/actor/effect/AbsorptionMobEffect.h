#pragma once

#include <string>
#include "MobEffect.h"


class AbsorptionMobEffect : MobEffect {

public:
    ~AbsorptionMobEffect();
    virtual void applyEffects(Actor *, int, int)const;
    virtual void removeEffects(Actor *);
    AbsorptionMobEffect(int, std::string const&, std::string const&, bool, int, int);
};
