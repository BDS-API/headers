#pragma once

class DyeableDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual DyeableDescription::~DyeableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    DyeableDescription(void);
};
