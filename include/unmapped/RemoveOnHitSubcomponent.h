#pragma once

class RemoveOnHitSubcomponent : OnHitSubcomponent {

public:
    virtual RemoveOnHitSubcomponent::~RemoveOnHitSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName(void);
    RemoveOnHitSubcomponent(void);
};
