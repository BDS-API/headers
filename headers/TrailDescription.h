#pragma once

class TrailDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void ~TrailDescription();
    virtual void ~TrailDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
