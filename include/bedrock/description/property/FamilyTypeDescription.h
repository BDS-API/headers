#pragma once

class FamilyTypeDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual FamilyTypeDescription::~FamilyTypeDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    FamilyTypeDescription(void);
};
