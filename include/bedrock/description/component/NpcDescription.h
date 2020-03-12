#pragma once

#include "../../../json/Value.h"
#include "ComponentDescription.h"


class NpcDescription : ComponentDescription {

public:
    ~NpcDescription();
    virtual void serializeData(Json::Value &)const;
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    NpcDescription();
};
