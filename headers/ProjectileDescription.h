#pragma once

class ProjectileDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void ProjectileDescription::~ProjectileDescription();
    virtual void ProjectileDescription::~ProjectileDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
