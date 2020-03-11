#pragma once

#include "./PropertyDescription.h"
#include "../../../json/Value.h"


class EquipmentTableDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual ~EquipmentTableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    EquipmentTableDescription();
};
