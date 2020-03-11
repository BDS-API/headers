#pragma once

#include "./PropertyDescription.h"
#include "../../../json/Value.h"


class IsBabyDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual ~IsBabyDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    IsBabyDescription();
};
