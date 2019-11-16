#pragma once

class HurtOwnerSubcomponent : OnHitSubcomponent {

    virtual ~HurtOwnerSubcomponent();
    virtual ~HurtOwnerSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
}
