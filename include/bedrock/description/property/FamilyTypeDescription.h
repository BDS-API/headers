#pragma once

#include "../../../json/Value"


class FamilyTypeDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual FamilyTypeDescription::~FamilyTypeDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    FamilyTypeDescription(void);
};
