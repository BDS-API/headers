#pragma once

#include "TriggerDescription.h"


class OnHurtDescription : TriggerDescription {

public:
    ~OnHurtDescription();
    virtual void getJsonName()const;
    OnHurtDescription();
};
