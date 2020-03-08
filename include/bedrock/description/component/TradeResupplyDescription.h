#pragma once

#include "../../../json/Value"


class TradeResupplyDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual TradeResupplyDescription::~TradeResupplyDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    TradeResupplyDescription(void);
};
