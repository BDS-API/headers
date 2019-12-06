#pragma once

class IsChestedDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~IsChestedDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void IsChestedDescription(void);
};
