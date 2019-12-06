#pragma once

class StickInGroundSubcomponent : OnHitSubcomponent {

public:
    virtual ~StickInGroundSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName(void);
    void StickInGroundSubcomponent(void);
};
