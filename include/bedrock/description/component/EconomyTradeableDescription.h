#pragma once

#include "../../../json/Value"


class EconomyTradeableDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual EconomyTradeableDescription::~EconomyTradeableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    EconomyTradeableDescription(void);
};
