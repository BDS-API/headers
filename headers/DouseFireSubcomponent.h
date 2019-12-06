#pragma once

class DouseFireSubcomponent : OnHitSubcomponent {

public:
    virtual ~DouseFireSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName(void);
    void DouseFireSubcomponent(void);
    bool isPotionWater(Actor &, ProjectileComponent &, HitResult const&);
    void douseFire(BlockSource &, BlockPos const&);
};
