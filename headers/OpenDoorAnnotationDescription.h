#pragma once

class OpenDoorAnnotationDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual ~OpenDoorAnnotationDescription();
    virtual ~OpenDoorAnnotationDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
