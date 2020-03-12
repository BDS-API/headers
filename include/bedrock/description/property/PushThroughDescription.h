#pragma once

#include "../../../json/Value.h"
#include "PropertyDescription.h"


class PushThroughDescription : PropertyDescription {

public:
    ~PushThroughDescription();
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    PushThroughDescription();
};
