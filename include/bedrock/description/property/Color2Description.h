#pragma once

#include "ColorDescription.h"
#include "../../../json/Value.h"


class Color2Description : ColorDescription {

public:
    virtual void deserializeData(Json::Value &);
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    ~Color2Description();
    Color2Description();
};
