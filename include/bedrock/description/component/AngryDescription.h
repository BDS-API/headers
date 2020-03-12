#pragma once

#include "ComponentDescription.h"


class AngryDescription : ComponentDescription {

public:
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    virtual void getJsonName()const;
    ~AngryDescription();
    AngryDescription();
};
