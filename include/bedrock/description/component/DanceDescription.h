#pragma once

#include "../../../json/Value.h"
#include "ComponentDescription.h"


class DanceDescription : ComponentDescription {

public:
    virtual void serializeData(Json::Value &)const;
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    ~DanceDescription();
};
