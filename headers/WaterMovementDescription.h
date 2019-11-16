#pragma once

class WaterMovementDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual ~WaterMovementDescription();
    virtual ~WaterMovementDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
