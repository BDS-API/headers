#pragma once

#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class TransformationDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~TransformationDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    TransformationDescription();
};
