#pragma once

class DynamicJumpControlDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void ~DynamicJumpControlDescription();
    virtual void ~DynamicJumpControlDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
