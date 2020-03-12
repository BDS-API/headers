#pragma once

#include "ComponentDescription.h"


class BreakDoorAnnotationDescription : ComponentDescription {

public:
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    virtual void getJsonName()const;
    ~BreakDoorAnnotationDescription();
    BreakDoorAnnotationDescription();
};
