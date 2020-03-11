#pragma once

#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class AngryDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~AngryDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    AngryDescription();
};
