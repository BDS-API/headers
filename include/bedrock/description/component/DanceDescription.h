#pragma once

#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class DanceDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~DanceDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

};
