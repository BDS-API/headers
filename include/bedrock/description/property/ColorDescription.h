#pragma once

class ColorDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual ColorDescription::~ColorDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    ColorDescription(void);
};
