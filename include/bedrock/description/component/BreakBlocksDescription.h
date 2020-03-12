#pragma once

#include "ComponentDescription.h"


class BreakBlocksDescription : ComponentDescription {

public:
    virtual void deserializeData(Json::Value &);
    ~BreakBlocksDescription();
    virtual void serializeData(Json::Value &)const;
    virtual void getJsonName()const;
    BreakBlocksDescription();
};
