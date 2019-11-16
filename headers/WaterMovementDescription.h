#pragma once

class WaterMovementDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void ~WaterMovementDescription();
    virtual void ~WaterMovementDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
