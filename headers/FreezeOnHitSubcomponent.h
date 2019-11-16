#pragma once

class FreezeOnHitSubcomponent : OnHitSubcomponent {

    virtual ~FreezeOnHitSubcomponent();
    virtual ~FreezeOnHitSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
}
