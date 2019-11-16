#pragma once

class FamilyTypeDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual ~FamilyTypeDescription();
    virtual ~FamilyTypeDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
