#pragma once

#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class NpcDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~NpcDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    NpcDescription();
};
