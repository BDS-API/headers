#pragma once

class TeleportToSubcomponent : OnHitSubcomponent {

public:
    virtual ~TeleportToSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName(void);
    void TeleportToSubcomponent(void);
};
