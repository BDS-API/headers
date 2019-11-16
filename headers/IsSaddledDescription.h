#pragma once

class IsSaddledDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual ~IsSaddledDescription();
    virtual ~IsSaddledDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
