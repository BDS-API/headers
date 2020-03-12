#pragma once

#include "PropertyDescription.h"


class FootSizeDescription : PropertyDescription {

public:
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    virtual void getJsonName()const;
    ~FootSizeDescription();
    FootSizeDescription();
};
