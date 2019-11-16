#pragma once

class TrailDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual ~TrailDescription();
    virtual ~TrailDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
