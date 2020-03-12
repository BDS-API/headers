#pragma once

#include "PropertyDescription.h"


class ScaleDescription : PropertyDescription {

public:
    virtual void serializeData(Json::Value &)const;
    ~ScaleDescription();
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    ScaleDescription();
};
