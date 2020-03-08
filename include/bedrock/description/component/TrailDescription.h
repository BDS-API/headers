#pragma once

#include "../../../json/Value"


class TrailDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    TrailDescription::~TrailDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    TrailDescription(void);
};
