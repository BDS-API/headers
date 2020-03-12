#pragma once

#include "ComponentDescription.h"


class ProjectileDescription : ComponentDescription {

public:
    ~ProjectileDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    virtual void getJsonName()const;
//  void parseProjectileAnchor(Json::Value &, ProjectileAnchor &, char const*, ProjectileAnchor, char const*); //TODO: incomplete function definition
    ProjectileDescription();
};
