#pragma once

#include "ComponentDescription.h"


class NpcDescription : ComponentDescription {

public:
    ~NpcDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    virtual void getJsonName()const;
    NpcDescription();
};
