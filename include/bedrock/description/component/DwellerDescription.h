#pragma once

#include "../../../json/Value.h"
#include "ComponentDescription.h"


class DwellerDescription : ComponentDescription {

public:
    virtual void deserializeData(Json::Value &);
    ~DwellerDescription();
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    DwellerDescription();
};
