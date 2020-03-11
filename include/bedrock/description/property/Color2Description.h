#pragma once

#include "./ColorDescription.h"
#include "../../../json/Value.h"


class Color2Description : ColorDescription {

public:
    virtual void getJsonName()const;
    virtual ~Color2Description();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    Color2Description();
};
