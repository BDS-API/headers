#pragma once

class IsSaddledDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~IsSaddledDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void IsSaddledDescription(void);
};
