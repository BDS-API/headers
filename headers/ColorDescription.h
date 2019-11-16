#pragma once

class ColorDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual void ColorDescription::~ColorDescription();
    virtual void ColorDescription::~ColorDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
