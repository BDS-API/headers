#pragma once

#include "MoveControlDescription.h"


class GlideMoveControlDescription : MoveControlDescription {

public:
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    ~GlideMoveControlDescription();
    virtual void deserializeData(Json::Value &);
    GlideMoveControlDescription();
};
