#pragma once

class BreakDoorAnnotationDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void ~BreakDoorAnnotationDescription();
    virtual void ~BreakDoorAnnotationDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
