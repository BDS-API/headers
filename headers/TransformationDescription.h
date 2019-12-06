#pragma once

class TransformationDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~TransformationDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void TransformationDescription(void);
};
