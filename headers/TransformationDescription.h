#pragma once

class TransformationDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual ~TransformationDescription();
    virtual ~TransformationDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
