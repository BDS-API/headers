#pragma once

#include "./DefintionDescription.h"
#include "./IsExperimentalDescription.h"
#include "../../../json/Value.h"


class IsExperimentalDescription : DefintionDescription {

public:
    virtual ~IsExperimentalDescription();
    virtual void getJsonName()const;

    IsExperimentalDescription();
    IsExperimentalDescription(IsExperimentalDescription &&);
    void parse(Json::Value &);
};
