#pragma once

#include "./MoveControlDescription.h"
#include "../../../json/Value.h"


class MoveControlSwayDescription : MoveControlDescription {

public:
    virtual void getJsonName()const;
    virtual ~MoveControlSwayDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    MoveControlSwayDescription();
};
