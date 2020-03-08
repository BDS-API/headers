#pragma once

#include "../../../json/Value"


class EquipmentTableDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    EquipmentTableDescription::~EquipmentTableDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    EquipmentTableDescription(void);
};
