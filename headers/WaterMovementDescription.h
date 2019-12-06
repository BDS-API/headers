#pragma once

class WaterMovementDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~WaterMovementDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void WaterMovementDescription(void);
};
