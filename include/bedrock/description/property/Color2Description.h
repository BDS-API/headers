#pragma once

#include "ColorDescription.h"


class Color2Description : ColorDescription {

public:
    virtual void getJsonName()const;
    ~Color2Description();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    Color2Description();
};
