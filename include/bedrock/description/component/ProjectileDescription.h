#pragma once

class ProjectileDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual ProjectileDescription::~ProjectileDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    ProjectileDescription(void);
    void parseProjectileAnchor(Json::Value &, ProjectileAnchor &, char const*, ProjectileAnchor, char const*);
};
