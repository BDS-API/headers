#pragma once

class AbsorptionMobEffect : MobEffect {

public:
    virtual ~AbsorptionMobEffect();
    virtual void applyEffects(Actor *, int, int)const;
    virtual void removeEffects(Actor *);

    void AbsorptionMobEffect(int, std::string const&, std::string const&, bool, int, int);
};
