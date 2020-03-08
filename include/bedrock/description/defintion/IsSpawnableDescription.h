#pragma once

#include "../../../json/Value"


class IsSpawnableDescription : DefintionDescription {

public:
    virtual IsSpawnableDescription::~IsSpawnableDescription()
    virtual void getJsonName()const;

    IsSpawnableDescription(void);
    IsSpawnableDescription(IsSpawnableDescription&&);
    void parse(Json::Value &);
};
