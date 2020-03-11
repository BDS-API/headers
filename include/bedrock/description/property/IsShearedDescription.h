#pragma once

#include "./PropertyDescription.h"
#include "../../../json/Value.h"


class IsShearedDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual ~IsShearedDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    IsShearedDescription();
};
