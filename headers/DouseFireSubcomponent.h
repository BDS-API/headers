#pragma once

class DouseFireSubcomponent : OnHitSubcomponent {

    virtual ~DouseFireSubcomponent();
    virtual ~DouseFireSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
}
