#pragma once

#include "../../../json/Value"


class OpenDoorAnnotationDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual OpenDoorAnnotationDescription::~OpenDoorAnnotationDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    OpenDoorAnnotationDescription(void);
};
