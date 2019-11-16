#pragma once

class FreezeOnHitSubcomponent : OnHitSubcomponent {

    virtual void FreezeOnHitSubcomponent::~FreezeOnHitSubcomponent();
    virtual void FreezeOnHitSubcomponent::~FreezeOnHitSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
}
