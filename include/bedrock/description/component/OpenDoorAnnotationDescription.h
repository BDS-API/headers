#pragma once

#include "ComponentDescription.h"


class OpenDoorAnnotationDescription : ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK29OpenDoorAnnotationDescription11getJsonNameEv
    ~OpenDoorAnnotationDescription(); // _ZN29OpenDoorAnnotationDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN29OpenDoorAnnotationDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK29OpenDoorAnnotationDescription13serializeDataERN4Json5ValueE
    OpenDoorAnnotationDescription(); // _ZN29OpenDoorAnnotationDescriptionC2Ev
};
