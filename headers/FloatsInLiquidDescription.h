#pragma once

class FloatsInLiquidDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual void ~FloatsInLiquidDescription();
    virtual void ~FloatsInLiquidDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
