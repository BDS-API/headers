#pragma once

#include "../../../json/Value"


class PushThroughDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    PushThroughDescription::~PushThroughDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    PushThroughDescription(void);
};
