#pragma once

#include "../../../json/Value"


class IsExperimentalDescription : DefintionDescription {

public:
    virtual IsExperimentalDescription::~IsExperimentalDescription()
    virtual void getJsonName()const;

    IsExperimentalDescription(void);
    IsExperimentalDescription(IsExperimentalDescription&&);
    void parse(Json::Value &);
};
