#pragma once

#include "../../../json/Value.h"
#include "ComponentDescription.h"


class MoveControlDescription : ComponentDescription {

public:
    virtual void serializeData(Json::Value &)const;
    ~MoveControlDescription();
    virtual void deserializeData(Json::Value &);
    MoveControlDescription();
};
