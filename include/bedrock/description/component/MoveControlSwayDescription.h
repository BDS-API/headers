#pragma once

#include "MoveControlDescription.h"


class MoveControlSwayDescription : MoveControlDescription {

public:
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    ~MoveControlSwayDescription();
    virtual void getJsonName()const;
    MoveControlSwayDescription();
};
