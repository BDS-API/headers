#pragma once

class EconomyTradeableDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~EconomyTradeableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void EconomyTradeableDescription(void);
};
