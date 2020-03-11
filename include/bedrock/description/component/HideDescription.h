#pragma once

#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class HideDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~HideDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    HideDescription();
};
