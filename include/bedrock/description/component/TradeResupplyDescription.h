#pragma once

#include "ComponentDescription.h"


class TradeResupplyDescription : ComponentDescription {

public:
    virtual void serializeData(Json::Value &)const;
    virtual void deserializeData(Json::Value &);
    ~TradeResupplyDescription();
    virtual void getJsonName()const;
    TradeResupplyDescription();
};
