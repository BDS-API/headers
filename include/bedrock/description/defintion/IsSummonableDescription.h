#pragma once

#include "./DefintionDescription.h"
#include "../../../json/Value.h"
#include "./IsSummonableDescription.h"


class IsSummonableDescription : DefintionDescription {

public:
    virtual ~IsSummonableDescription();
    virtual void getJsonName()const;

    IsSummonableDescription();
    IsSummonableDescription(IsSummonableDescription &&);
    void parse(Json::Value &);
};
