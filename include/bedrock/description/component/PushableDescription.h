#pragma once

#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class PushableDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~PushableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    PushableDescription();
};
