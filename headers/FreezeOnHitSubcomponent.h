#pragma once

class FreezeOnHitSubcomponent : OnHitSubcomponent {

public:
    virtual ~FreezeOnHitSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName(void);
    void FreezeOnHitSubcomponent(void);
};
