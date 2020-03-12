#pragma once

#include "TriggerDescription.h"


class OnDeathDescription : TriggerDescription {

public:
    ~OnDeathDescription();
    virtual void getJsonName()const;
    OnDeathDescription();
};
