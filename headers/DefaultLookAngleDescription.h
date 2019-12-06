#pragma once

class DefaultLookAngleDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~DefaultLookAngleDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void DefaultLookAngleDescription(void);
};
