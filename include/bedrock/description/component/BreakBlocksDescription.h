#pragma once

#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class BreakBlocksDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~BreakBlocksDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    BreakBlocksDescription();
};
