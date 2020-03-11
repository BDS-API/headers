#pragma once

#include "./PropertyDescription.h"
#include "../../../json/Value.h"


class PushThroughDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual ~PushThroughDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    PushThroughDescription();
};
