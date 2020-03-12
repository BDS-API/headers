#pragma once

#include "../../../json/Value.h"
#include "ComponentDescription.h"


class HideDescription : ComponentDescription {

public:
    virtual void serializeData(Json::Value &)const;
    ~HideDescription();
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    HideDescription();
};
