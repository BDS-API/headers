#pragma once

#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class TameableDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~TameableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    TameableDescription();
};
