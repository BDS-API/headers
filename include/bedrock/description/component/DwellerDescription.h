#pragma once

#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class DwellerDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~DwellerDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    DwellerDescription();
};
