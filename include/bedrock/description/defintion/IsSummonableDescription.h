#pragma once

#include "DefintionDescription.h"
#include "../../../json/Value.h"


class IsSummonableDescription : DefintionDescription {

public:
    ~IsSummonableDescription();
    virtual void getJsonName()const;
    void parse(Json::Value &);
    IsSummonableDescription(IsSummonableDescription &&);
    IsSummonableDescription();
};
