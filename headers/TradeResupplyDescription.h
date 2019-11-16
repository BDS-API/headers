#pragma once

class TradeResupplyDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void ~TradeResupplyDescription();
    virtual void ~TradeResupplyDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
