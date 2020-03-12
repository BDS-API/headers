#pragma once

#include "../../../json/Value.h"
#include "PropertyDescription.h"


class ScaleDescription : PropertyDescription {

public:
    virtual void deserializeData(Json::Value &);
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    ~ScaleDescription();
    ScaleDescription();
};
