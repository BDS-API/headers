#pragma once

#include "TriggerDescription.h"


class OnTargetAcquiredDescription : TriggerDescription {

public:
    ~OnTargetAcquiredDescription();
    virtual void getJsonName()const;
    OnTargetAcquiredDescription();
};
