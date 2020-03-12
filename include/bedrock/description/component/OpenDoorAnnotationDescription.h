#pragma once

#include "ComponentDescription.h"


class OpenDoorAnnotationDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    ~OpenDoorAnnotationDescription();
    virtual void deserializeData(Json::Value &);
    OpenDoorAnnotationDescription();
};
