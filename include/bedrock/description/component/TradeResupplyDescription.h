#pragma once

#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class TradeResupplyDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~TradeResupplyDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    TradeResupplyDescription();
};
