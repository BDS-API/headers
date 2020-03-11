#pragma once

#include "./PropertyDescription.h"
#include "../../../json/Value.h"


class ScaleDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual ~ScaleDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    ScaleDescription();
};
