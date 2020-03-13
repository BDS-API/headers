#pragma once

#include "ComponentDescription.h"


class ProjectileDescription : ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK21ProjectileDescription11getJsonNameEv
    ~ProjectileDescription(); // _ZN21ProjectileDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN21ProjectileDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK21ProjectileDescription13serializeDataERN4Json5ValueE
    ProjectileDescription(); // _ZN21ProjectileDescriptionC2Ev
//  void parseProjectileAnchor(Json::Value &, ProjectileAnchor &, char const*, ProjectileAnchor, char const*); //TODO: incomplete function definition // _ZN21ProjectileDescription21parseProjectileAnchorERN4Json5ValueER16ProjectileAnchorPKcS3_S6_
};
