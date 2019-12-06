#pragma once

class EquipmentTableDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~EquipmentTableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void EquipmentTableDescription(void);
};
