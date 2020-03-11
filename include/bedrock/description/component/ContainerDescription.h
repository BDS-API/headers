#pragma once

#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class ContainerDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~ContainerDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    ContainerDescription();
};
