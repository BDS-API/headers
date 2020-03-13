#pragma once

#include "ComponentDescription.h"


class BreakDoorAnnotationDescription : ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK30BreakDoorAnnotationDescription11getJsonNameEv
    ~BreakDoorAnnotationDescription(); // _ZN30BreakDoorAnnotationDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN30BreakDoorAnnotationDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK30BreakDoorAnnotationDescription13serializeDataERN4Json5ValueE
    BreakDoorAnnotationDescription(); // _ZN30BreakDoorAnnotationDescriptionC2Ev
};
