#pragma once

#include "DefintionDescription.h"


class IsExperimentalDescription : DefintionDescription {

public:
    ~IsExperimentalDescription();
    virtual void getJsonName()const;
    IsExperimentalDescription();
    void parse(Json::Value &);
    IsExperimentalDescription(IsExperimentalDescription &&);
};
