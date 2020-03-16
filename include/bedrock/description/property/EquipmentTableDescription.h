#pragma once

#include "PropertyDescription.h"


class EquipmentTableDescription : public PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK25EquipmentTableDescription11getJsonNameEv
    virtual ~EquipmentTableDescription(); // _ZN25EquipmentTableDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN25EquipmentTableDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK25EquipmentTableDescription13serializeDataERN4Json5ValueE
    EquipmentTableDescription(); // _ZN25EquipmentTableDescriptionC2Ev
};
