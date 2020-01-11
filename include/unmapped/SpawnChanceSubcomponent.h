#pragma once

class SpawnChanceSubcomponent : OnHitSubcomponent {

public:
    virtual SpawnChanceSubcomponent::~SpawnChanceSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName(void);
    SpawnChanceSubcomponent(void);
};