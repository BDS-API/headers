#pragma once

#include "../../../json/Value.h"
#include "MoveControlDescription.h"


class MoveControlSwayDescription : MoveControlDescription {

public:
    virtual void serializeData(Json::Value &)const;
    ~MoveControlSwayDescription();
    virtual void deserializeData(Json::Value &);
    virtual void getJsonName()const;
    MoveControlSwayDescription();
};
