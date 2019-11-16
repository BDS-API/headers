#pragma once

class TeleportToSubcomponent : OnHitSubcomponent {

    virtual ~TeleportToSubcomponent();
    virtual ~TeleportToSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
}
