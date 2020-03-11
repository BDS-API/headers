#pragma once

#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class BreakDoorAnnotationDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~BreakDoorAnnotationDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    BreakDoorAnnotationDescription();
};
