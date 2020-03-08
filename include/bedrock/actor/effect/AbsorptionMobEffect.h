#pragma once

#include "../Actor"


class AbsorptionMobEffect : MobEffect {

public:
    virtual AbsorptionMobEffect::~AbsorptionMobEffect()
    virtual void applyEffects(Actor *, int, int)const;
    virtual void removeEffects(Actor *);

    AbsorptionMobEffect(int, std::string const&, std::string const&, bool, int, int);
};
