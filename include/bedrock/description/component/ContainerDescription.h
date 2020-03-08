#pragma once

#include "../../../json/Value"


class ContainerDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    ContainerDescription::~ContainerDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    ContainerDescription(void);
};
