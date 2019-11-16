#pragma once

class IsSaddledDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual void ~IsSaddledDescription();
    virtual void ~IsSaddledDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
