#pragma once

#include "./TriggerDescription.h"


class OnStartTakeoffDescription : TriggerDescription {

public:
    virtual void getJsonName()const;
    virtual ~OnStartTakeoffDescription();

    OnStartTakeoffDescription();
};
