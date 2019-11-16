#pragma once

class SkinIDDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual ~SkinIDDescription();
    virtual ~SkinIDDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
