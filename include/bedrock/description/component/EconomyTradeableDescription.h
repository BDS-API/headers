#pragma once

#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class EconomyTradeableDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~EconomyTradeableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    EconomyTradeableDescription();
};
