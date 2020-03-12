#pragma once

#include "../../../json/Value.h"
#include "ComponentDescription.h"


class BreakBlocksDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    virtual void deserializeData(Json::Value &);
    ~BreakBlocksDescription();
    BreakBlocksDescription();
};
