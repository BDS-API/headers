#pragma once

#include "./PropertyDescription.h"
#include "../../../json/Value.h"


class FootSizeDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual ~FootSizeDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    FootSizeDescription();
};
