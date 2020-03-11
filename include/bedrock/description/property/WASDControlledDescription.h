#pragma once

#include "./PropertyDescription.h"
#include "../../../json/Value.h"


class WASDControlledDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual ~WASDControlledDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    WASDControlledDescription();
};
