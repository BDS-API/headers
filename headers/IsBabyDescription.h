#pragma once

class IsBabyDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~IsBabyDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void IsBabyDescription(void);
};
