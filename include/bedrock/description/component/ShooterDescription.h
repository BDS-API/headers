#pragma once

#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class ShooterDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~ShooterDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    ShooterDescription();
};
