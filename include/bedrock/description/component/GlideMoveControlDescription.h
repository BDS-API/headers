#pragma once

#include "./MoveControlDescription.h"
#include "../../../json/Value.h"


class GlideMoveControlDescription : MoveControlDescription {

public:
    virtual void getJsonName()const;
    virtual ~GlideMoveControlDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    GlideMoveControlDescription();
};
