#pragma once

class BreakDoorAnnotationDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual BreakDoorAnnotationDescription::~BreakDoorAnnotationDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    BreakDoorAnnotationDescription(void);
};
