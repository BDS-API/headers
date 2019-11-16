#pragma once

class StickInGroundSubcomponent : OnHitSubcomponent {

    virtual void StickInGroundSubcomponent::~StickInGroundSubcomponent();
    virtual void StickInGroundSubcomponent::~StickInGroundSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
}
