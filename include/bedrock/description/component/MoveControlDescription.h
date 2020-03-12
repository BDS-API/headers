#pragma once

#include "ComponentDescription.h"


class MoveControlDescription : ComponentDescription {

public:
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    ~MoveControlDescription();
    MoveControlDescription();
};
