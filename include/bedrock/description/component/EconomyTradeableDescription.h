#pragma once

#include "ComponentDescription.h"


class EconomyTradeableDescription : ComponentDescription {

public:
    virtual void deserializeData(Json::Value &);
    virtual void getJsonName()const;
    ~EconomyTradeableDescription();
    virtual void serializeData(Json::Value &)const;
    EconomyTradeableDescription();
};
