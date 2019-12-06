#pragma once

class IsStackableDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~IsStackableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void IsStackableDescription(void);
};
