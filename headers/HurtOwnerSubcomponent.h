#pragma once

class HurtOwnerSubcomponent : OnHitSubcomponent {

    virtual void ~HurtOwnerSubcomponent();
    virtual void ~HurtOwnerSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
}
