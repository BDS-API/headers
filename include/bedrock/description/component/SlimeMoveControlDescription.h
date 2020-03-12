#pragma once

#include "MoveControlDescription.h"


class SlimeMoveControlDescription : MoveControlDescription {

public:
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    virtual void getJsonName()const;
    ~SlimeMoveControlDescription();
    SlimeMoveControlDescription();
};
