#pragma once

#include "./TriggerDescription.h"


class OnHurtDescription : TriggerDescription {

public:
    virtual void getJsonName()const;
    virtual ~OnHurtDescription();

    OnHurtDescription();
};
