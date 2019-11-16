#pragma once

class RailActivatorDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual ~RailActivatorDescription();
    virtual ~RailActivatorDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
