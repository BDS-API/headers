#pragma once

class EconomyTradeableDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual ~EconomyTradeableDescription();
    virtual ~EconomyTradeableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
