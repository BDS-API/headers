#pragma once

#include "../../../json/Value.h"
#include "ComponentDescription.h"


class AngryDescription : ComponentDescription {

public:
    virtual void serializeData(Json::Value &)const;
    ~AngryDescription();
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    AngryDescription();
};
