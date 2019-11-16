#pragma once

class ColorDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual void ~ColorDescription();
    virtual void ~ColorDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
