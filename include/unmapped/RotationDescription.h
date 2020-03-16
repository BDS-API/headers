#pragma once

#include "../bedrock/util/Vec2.h"
#include "../bedrock/description/Description.h"


class RotationDescription : public Description {

public:
    virtual void getJsonName()const; // _ZNK19RotationDescription11getJsonNameEv
    virtual ~RotationDescription(); // _ZN19RotationDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN19RotationDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK19RotationDescription13serializeDataERN4Json5ValueE
    RotationDescription(); // _ZN19RotationDescriptionC2Ev
    RotationDescription(Vec2); // _ZN19RotationDescriptionC2E4Vec2
};
