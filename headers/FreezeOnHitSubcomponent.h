#pragma once

class FreezeOnHitSubcomponent : OnHitSubcomponent {

    virtual void Freeze~FreezeOnHitSubcomponent();
    virtual void Freeze~FreezeOnHitSubcomponent();
    virtual void FreezereadfromJSON(Json::Value &);
    virtual void FreezewritetoJSON(Json::Value &)const;
    virtual void FreezedoOnHitEffect(Actor &, ProjectileComponent &);
}
