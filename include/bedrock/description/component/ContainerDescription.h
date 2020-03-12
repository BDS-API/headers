#pragma once

#include "ComponentDescription.h"


class ContainerDescription : ComponentDescription {

public:
    virtual void serializeData(Json::Value &)const;
    ~ContainerDescription();
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    ContainerDescription();
};
