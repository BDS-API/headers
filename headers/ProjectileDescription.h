#pragma once

class ProjectileDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void ~ProjectileDescription();
    virtual void ~ProjectileDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
