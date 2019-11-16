#pragma once

class BreakDoorAnnotationDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual ~BreakDoorAnnotationDescription();
    virtual ~BreakDoorAnnotationDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
