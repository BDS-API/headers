#pragma once

#include "../../../json/Value.h"
#include "ComponentDescription.h"


class EconomyTradeableDescription : ComponentDescription {

public:
    virtual void serializeData(Json::Value &)const;
    virtual void deserializeData(Json::Value &);
    virtual void getJsonName()const;
    ~EconomyTradeableDescription();
    EconomyTradeableDescription();
};
