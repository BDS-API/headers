#pragma once

#include "PropertyDescription.h"


class PushThroughDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    ~PushThroughDescription();
    virtual void deserializeData(Json::Value &);
    PushThroughDescription();
};
