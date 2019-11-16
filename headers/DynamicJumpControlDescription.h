#pragma once

class DynamicJumpControlDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual ~DynamicJumpControlDescription();
    virtual ~DynamicJumpControlDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
