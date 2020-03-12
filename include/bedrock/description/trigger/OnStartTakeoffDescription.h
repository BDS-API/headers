#pragma once

#include "TriggerDescription.h"


class OnStartTakeoffDescription : TriggerDescription {

public:
    virtual void getJsonName()const;
    ~OnStartTakeoffDescription();
    OnStartTakeoffDescription();
};
