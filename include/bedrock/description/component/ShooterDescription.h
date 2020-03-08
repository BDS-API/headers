#pragma once

#include "../../../json/Value"


class ShooterDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ShooterDescription::~ShooterDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    ShooterDescription(void);
};
