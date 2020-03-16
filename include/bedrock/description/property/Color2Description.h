#pragma once

#include "ColorDescription.h"


class Color2Description : public ColorDescription {

public:
    virtual void getJsonName()const; // _ZNK17Color2Description11getJsonNameEv
    virtual ~Color2Description(); // _ZN17Color2DescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN17Color2Description15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK17Color2Description13serializeDataERN4Json5ValueE
    Color2Description(); // _ZN17Color2DescriptionC2Ev
};
