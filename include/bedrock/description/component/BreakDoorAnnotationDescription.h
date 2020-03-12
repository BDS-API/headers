#pragma once

#include "../../../json/Value.h"
#include "ComponentDescription.h"


class BreakDoorAnnotationDescription : ComponentDescription {

public:
    ~BreakDoorAnnotationDescription();
    virtual void serializeData(Json::Value &)const;
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    BreakDoorAnnotationDescription();
};
