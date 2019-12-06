#pragma once

class OpenDoorAnnotationDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~OpenDoorAnnotationDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void OpenDoorAnnotationDescription(void);
};
