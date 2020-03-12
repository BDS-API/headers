#pragma once

#include "PropertyDescription.h"


class FamilyTypeDescription : PropertyDescription {

public:
    virtual void serializeData(Json::Value &)const;
    ~FamilyTypeDescription();
    virtual void deserializeData(Json::Value &);
    virtual void getJsonName()const;
    FamilyTypeDescription();
};
