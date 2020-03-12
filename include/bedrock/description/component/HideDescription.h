#pragma once

#include "ComponentDescription.h"


class HideDescription : ComponentDescription {

public:
    virtual void serializeData(Json::Value &)const;
    virtual void deserializeData(Json::Value &);
    virtual void getJsonName()const;
    ~HideDescription();
    HideDescription();
};
