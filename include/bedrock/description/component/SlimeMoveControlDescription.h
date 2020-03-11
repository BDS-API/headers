#pragma once

#include "./MoveControlDescription.h"
#include "../../../json/Value.h"


class SlimeMoveControlDescription : MoveControlDescription {

public:
    virtual void getJsonName()const;
    virtual ~SlimeMoveControlDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    SlimeMoveControlDescription();
};
