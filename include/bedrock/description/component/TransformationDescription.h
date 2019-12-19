#pragma once

class TransformationDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual TransformationDescription::~TransformationDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    TransformationDescription(void);
};
