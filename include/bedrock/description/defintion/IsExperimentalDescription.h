#pragma once

#include "DefintionDescription.h"
#include "../../../json/Value.h"


class IsExperimentalDescription : DefintionDescription {

public:
    ~IsExperimentalDescription();
    virtual void getJsonName()const;
    IsExperimentalDescription(IsExperimentalDescription &&);
    void parse(Json::Value &);
    IsExperimentalDescription();
};
