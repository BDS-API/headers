#pragma once

class OpenDoorAnnotationDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual OpenDoorAnnotationDescription::~OpenDoorAnnotationDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    OpenDoorAnnotationDescription(void);
};
