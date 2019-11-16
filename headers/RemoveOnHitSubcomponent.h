#pragma once

class RemoveOnHitSubcomponent : OnHitSubcomponent {

    virtual ~RemoveOnHitSubcomponent();
    virtual ~RemoveOnHitSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
}
