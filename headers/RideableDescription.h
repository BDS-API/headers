#pragma once

class RideableDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void RideableDescription::~RideableDescription();
    virtual void RideableDescription::~RideableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
