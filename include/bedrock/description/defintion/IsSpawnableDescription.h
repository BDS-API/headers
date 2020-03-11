#pragma once

#include "./DefintionDescription.h"
#include "./IsSpawnableDescription.h"
#include "../../../json/Value.h"


class IsSpawnableDescription : DefintionDescription {

public:
    virtual ~IsSpawnableDescription();
    virtual void getJsonName()const;

    IsSpawnableDescription();
    IsSpawnableDescription(IsSpawnableDescription &&);
    void parse(Json::Value &);
};
