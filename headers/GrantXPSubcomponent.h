#pragma once

class GrantXPSubcomponent : OnHitSubcomponent {

public:
    virtual ~GrantXPSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName(void);
    void GrantXPSubcomponent(void);
};
