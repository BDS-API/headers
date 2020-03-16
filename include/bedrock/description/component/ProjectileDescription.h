#pragma once

#include "ComponentDescription.h"


class ProjectileDescription : public ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK21ProjectileDescription11getJsonNameEv
    virtual ~ProjectileDescription(); // _ZN21ProjectileDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN21ProjectileDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK21ProjectileDescription13serializeDataERN4Json5ValueE
    ProjectileDescription(); // _ZN21ProjectileDescriptionC2Ev
//    void parseProjectileAnchor(Json::Value &, long &, char const*, long, char const*); //TODO: incomplete function definition // _ZN21ProjectileDescription21parseProjectileAnchorERN4Json5ValueER16ProjectileAnchorPKcS3_S6_
};
