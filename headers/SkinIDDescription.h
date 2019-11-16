#pragma once

class SkinIDDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual void ~SkinIDDescription();
    virtual void ~SkinIDDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
