#pragma once

class TradeResupplyDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~TradeResupplyDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void TradeResupplyDescription(void);
};
