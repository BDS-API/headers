#pragma once

#include "../../../json/Value.h"
#include "ComponentDescription.h"


class ShooterDescription : ComponentDescription {

public:
    virtual void deserializeData(Json::Value &);
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    ~ShooterDescription();
    ShooterDescription();
};
