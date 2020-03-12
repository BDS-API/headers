#pragma once

#include "MobEffect.h"
#include "../Actor.h"
#include <string>


class AbsorptionMobEffect : MobEffect {

public:
    virtual void removeEffects(Actor *);
    virtual void applyEffects(Actor *, int, int)const;
    ~AbsorptionMobEffect();
    AbsorptionMobEffect(int, std::string const&, std::string const&, bool, int, int);
};
