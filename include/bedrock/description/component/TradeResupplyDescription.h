#pragma once

#include "../../../json/Value.h"
#include "ComponentDescription.h"


class TradeResupplyDescription : ComponentDescription {

public:
    ~TradeResupplyDescription();
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    virtual void deserializeData(Json::Value &);
    TradeResupplyDescription();
};
