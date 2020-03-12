#pragma once

#include "TriggerDescription.h"


class OnStartTakeoffDescription : TriggerDescription {

public:
    ~OnStartTakeoffDescription();
    virtual void getJsonName()const;
    OnStartTakeoffDescription();
};
