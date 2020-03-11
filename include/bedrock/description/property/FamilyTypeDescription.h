#pragma once

#include "./PropertyDescription.h"
#include "../../../json/Value.h"


class FamilyTypeDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual ~FamilyTypeDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    FamilyTypeDescription();
};
