#pragma once

class HurtOwnerSubcomponent : OnHitSubcomponent {

public:
    virtual ~HurtOwnerSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName(void);
    void HurtOwnerSubcomponent(void);
};
