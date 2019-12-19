#pragma once

class WASDControlledDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual WASDControlledDescription::~WASDControlledDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    WASDControlledDescription(void);
};
