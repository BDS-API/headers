#pragma once

#include "../../../json/Value.h"
#include "MoveControlDescription.h"


class GlideMoveControlDescription : MoveControlDescription {

public:
    virtual void getJsonName()const;
    ~GlideMoveControlDescription();
    virtual void serializeData(Json::Value &)const;
    virtual void deserializeData(Json::Value &);
    GlideMoveControlDescription();
};
