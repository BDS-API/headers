#pragma once

class IsExperimentalDescription : DefintionDescription {

public:
    virtual IsExperimentalDescription::~IsExperimentalDescription();
    virtual void getJsonName(void)const;

    IsExperimentalDescription(void);
    IsExperimentalDescription(IsExperimentalDescription&&);
    void parse(Json::Value &);
};