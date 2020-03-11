#pragma once

#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class ProjectileDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~ProjectileDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    ProjectileDescription();
//  void parseProjectileAnchor(Json::Value &, ProjectileAnchor &, char const*, ProjectileAnchor, char const*); //TODO: incomplete function definition
};
