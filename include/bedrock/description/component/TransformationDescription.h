#pragma once

#include "ComponentDescription.h"


class TransformationDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    virtual void deserializeData(Json::Value &);
    ~TransformationDescription();
    TransformationDescription();
};
