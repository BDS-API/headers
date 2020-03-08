#pragma once

#include "../../../json/Value"


class BreakDoorAnnotationDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    BreakDoorAnnotationDescription::~BreakDoorAnnotationDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    BreakDoorAnnotationDescription(void);
};
