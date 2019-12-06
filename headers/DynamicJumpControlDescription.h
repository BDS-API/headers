#pragma once

class DynamicJumpControlDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~DynamicJumpControlDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void DynamicJumpControlDescription(void);
};
