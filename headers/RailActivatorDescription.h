#pragma once

class RailActivatorDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void ~RailActivatorDescription();
    virtual void ~RailActivatorDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
