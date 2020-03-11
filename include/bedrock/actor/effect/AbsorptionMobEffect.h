#pragma once

#include "./MobEffect.h"
#include "../Actor.h"
#include <string>


class AbsorptionMobEffect : MobEffect {

public:
    virtual ~AbsorptionMobEffect();
    virtual void applyEffects(Actor *, int, int)const;
    virtual void removeEffects(Actor *);

    AbsorptionMobEffect(int, std::string const&, std::string const&, bool, int, int);
};
