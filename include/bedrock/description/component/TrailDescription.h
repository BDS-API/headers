#pragma once

#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class TrailDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~TrailDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    TrailDescription();
};
