#pragma once

#include "../../../json/Value"


class RideableDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual RideableDescription::~RideableDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    RideableDescription(void);
    void parseSeatDescription(Json::Value &);
};
