#pragma once

#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class DespawnDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~DespawnDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    DespawnDescription();
};
