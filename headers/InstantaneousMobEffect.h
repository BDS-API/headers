#pragma once

class InstantaneousMobEffect : MobEffect {

public:
    virtual ~InstantaneousMobEffect();
    virtual bool isInstantaneous(void)const;
    virtual bool isDurationEffectTick(int, int)const;

    void InstantaneousMobEffect(int, std::string const&, std::string const&, bool, int, int);
};
