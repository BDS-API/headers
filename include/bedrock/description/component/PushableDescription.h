#pragma once

#include "ComponentDescription.h"


class PushableDescription : ComponentDescription {

public:
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    ~PushableDescription();
    virtual void getJsonName()const;
    PushableDescription();
};
