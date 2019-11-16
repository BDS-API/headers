#pragma once

class OpenDoorAnnotationDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void ~OpenDoorAnnotationDescription();
    virtual void ~OpenDoorAnnotationDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
