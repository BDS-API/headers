#pragma once

class DanceDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void ~DanceDescription();
    virtual void ~DanceDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
