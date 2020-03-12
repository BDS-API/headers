#pragma once

#include "../../../json/Value.h"
#include "ComponentDescription.h"


class DespawnDescription : ComponentDescription {

public:
    ~DespawnDescription();
    virtual void serializeData(Json::Value &)const;
    virtual void deserializeData(Json::Value &);
    virtual void getJsonName()const;
    DespawnDescription();
};
