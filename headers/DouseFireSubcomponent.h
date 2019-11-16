#pragma once

class DouseFireSubcomponent : OnHitSubcomponent {

    virtual void ~DouseFireSubcomponent();
    virtual void ~DouseFireSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
}
