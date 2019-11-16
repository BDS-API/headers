#pragma once

class ProjectileDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual ~ProjectileDescription();
    virtual ~ProjectileDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
