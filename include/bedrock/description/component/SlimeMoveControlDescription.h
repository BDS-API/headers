#pragma once

#include "../../../json/Value.h"
#include "MoveControlDescription.h"


class SlimeMoveControlDescription : MoveControlDescription {

public:
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    ~SlimeMoveControlDescription();
    virtual void serializeData(Json::Value &)const;
    SlimeMoveControlDescription();
};
