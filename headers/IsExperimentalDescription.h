#pragma once

class IsExperimentalDescription : DefintionDescription {

public:
    virtual ~IsExperimentalDescription();
    virtual void getJsonName(void)const;

    void IsExperimentalDescription(void);
    void IsExperimentalDescription(IsExperimentalDescription&&);
    void parse(Json::Value &);
};
