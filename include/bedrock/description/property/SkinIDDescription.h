#pragma once

class SkinIDDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual SkinIDDescription::~SkinIDDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    SkinIDDescription(void);
};
