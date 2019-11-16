#pragma once

class FloatsInLiquidDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual ~FloatsInLiquidDescription();
    virtual ~FloatsInLiquidDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
