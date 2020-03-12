#pragma once

#include "ComponentDescription.h"


class DespawnDescription : ComponentDescription {

public:
    virtual void serializeData(Json::Value &)const;
    virtual void deserializeData(Json::Value &);
    ~DespawnDescription();
    virtual void getJsonName()const;
    DespawnDescription();
};
