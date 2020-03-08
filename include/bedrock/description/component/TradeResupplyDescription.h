#pragma once

#include "../../../json/Value"


class TradeResupplyDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    TradeResupplyDescription::~TradeResupplyDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    TradeResupplyDescription(void);
};
