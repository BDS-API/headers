#pragma once

#include "../../../json/Value"


class TransformationDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual TransformationDescription::~TransformationDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    TransformationDescription(void);
};
