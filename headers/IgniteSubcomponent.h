#pragma once

class IgniteSubcomponent : OnHitSubcomponent {

public:
    virtual ~IgniteSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName(void);
    void IgniteSubcomponent(void);
};
