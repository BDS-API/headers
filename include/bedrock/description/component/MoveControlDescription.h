#pragma once

#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class MoveControlDescription : ComponentDescription {

public:
    virtual ~MoveControlDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    MoveControlDescription();
};
