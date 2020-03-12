#pragma once

#include "../../../json/Value.h"
#include "PropertyDescription.h"


class FamilyTypeDescription : PropertyDescription {

public:
    virtual void serializeData(Json::Value &)const;
    ~FamilyTypeDescription();
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    FamilyTypeDescription();
};
