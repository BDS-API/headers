#pragma once

#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class OpenDoorAnnotationDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~OpenDoorAnnotationDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    OpenDoorAnnotationDescription();
};
