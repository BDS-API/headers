#pragma once

#include "../../../json/Value.h"
#include "ComponentDescription.h"


class TameableDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    virtual void deserializeData(Json::Value &);
    ~TameableDescription();
    TameableDescription();
};
