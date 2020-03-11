#pragma once

#include "./PropertyDescription.h"
#include "../../../json/Value.h"


class IsChestedDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual ~IsChestedDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    IsChestedDescription();
};
