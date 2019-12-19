#pragma once

class TradeResupplyDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual TradeResupplyDescription::~TradeResupplyDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    TradeResupplyDescription(void);
};
