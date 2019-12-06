#pragma once

class FireImmuneDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~FireImmuneDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void FireImmuneDescription(void);
};
