#pragma once

#include "./TriggerDescription.h"


class OnTargetAcquiredDescription : TriggerDescription {

public:
    virtual void getJsonName()const;
    virtual ~OnTargetAcquiredDescription();

    OnTargetAcquiredDescription();
};
