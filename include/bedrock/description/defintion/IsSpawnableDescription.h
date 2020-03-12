#pragma once

#include "DefintionDescription.h"
#include "../../../json/Value.h"


class IsSpawnableDescription : DefintionDescription {

public:
    ~IsSpawnableDescription();
    virtual void getJsonName()const;
    IsSpawnableDescription();
    void parse(Json::Value &);
    IsSpawnableDescription(IsSpawnableDescription &&);
};
