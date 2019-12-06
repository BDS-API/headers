#pragma once

class RailActivatorDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~RailActivatorDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void RailActivatorDescription(void);
};
