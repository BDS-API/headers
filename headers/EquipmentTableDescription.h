#pragma once

class EquipmentTableDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual ~EquipmentTableDescription();
    virtual ~EquipmentTableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
