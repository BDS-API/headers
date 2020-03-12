#pragma once

#include "DefintionDescription.h"


class IsSummonableDescription : DefintionDescription {

public:
    virtual void getJsonName()const;
    ~IsSummonableDescription();
    IsSummonableDescription();
    IsSummonableDescription(IsSummonableDescription &&);
    void parse(Json::Value &);
};
