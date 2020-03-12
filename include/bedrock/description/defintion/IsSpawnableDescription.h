#pragma once

#include "DefintionDescription.h"


class IsSpawnableDescription : DefintionDescription {

public:
    virtual void getJsonName()const;
    ~IsSpawnableDescription();
    void parse(Json::Value &);
    IsSpawnableDescription(IsSpawnableDescription &&);
    IsSpawnableDescription();
};
