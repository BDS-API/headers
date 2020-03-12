#pragma once

#include "../../../json/Value.h"
#include "ComponentDescription.h"


class ContainerDescription : ComponentDescription {

public:
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    virtual void getJsonName()const;
    ~ContainerDescription();
    ContainerDescription();
};
