#pragma once

#include "ComponentDescription.h"


class TameableDescription : ComponentDescription {

public:
    virtual void deserializeData(Json::Value &);
    ~TameableDescription();
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    TameableDescription();
};
