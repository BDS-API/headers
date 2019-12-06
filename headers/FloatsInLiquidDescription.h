#pragma once

class FloatsInLiquidDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~FloatsInLiquidDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void FloatsInLiquidDescription(void);
};
