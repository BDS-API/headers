#pragma once

class ColorDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual ~ColorDescription();
    virtual ~ColorDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
