#pragma once

#include "../../../json/Value.h"
#include "ComponentDescription.h"


class OpenDoorAnnotationDescription : ComponentDescription {

public:
    ~OpenDoorAnnotationDescription();
    virtual void serializeData(Json::Value &)const;
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    OpenDoorAnnotationDescription();
};
