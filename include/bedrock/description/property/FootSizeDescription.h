#pragma once

#include "../../../json/Value.h"
#include "PropertyDescription.h"


class FootSizeDescription : PropertyDescription {

public:
    virtual void serializeData(Json::Value &)const;
    virtual void deserializeData(Json::Value &);
    ~FootSizeDescription();
    virtual void getJsonName()const;
    FootSizeDescription();
};
