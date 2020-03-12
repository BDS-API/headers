#pragma once

#include "ComponentDescription.h"


class DwellerDescription : ComponentDescription {

public:
    virtual void deserializeData(Json::Value &);
    virtual void getJsonName()const;
    ~DwellerDescription();
    virtual void serializeData(Json::Value &)const;
    DwellerDescription();
};
