#pragma once

#include "../bedrock/description/Description.h"
#include "../bedrock/util/Vec2.h"


class RotationDescription : Description {

public:
    virtual void getJsonName()const; // _ZNK19RotationDescription11getJsonNameEv
    ~RotationDescription(); // _ZN19RotationDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN19RotationDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK19RotationDescription13serializeDataERN4Json5ValueE
    RotationDescription(); // _ZN19RotationDescriptionC2Ev
    RotationDescription(Vec2); // _ZN19RotationDescriptionC2E4Vec2
};
