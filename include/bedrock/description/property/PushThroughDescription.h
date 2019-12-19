#pragma once

class PushThroughDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual PushThroughDescription::~PushThroughDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    PushThroughDescription(void);
};
