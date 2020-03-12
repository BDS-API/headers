#pragma once

#include "PropertyDescription.h"


class EquipmentTableDescription : PropertyDescription {

public:
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    ~EquipmentTableDescription();
    virtual void getJsonName()const;
    EquipmentTableDescription();
};
