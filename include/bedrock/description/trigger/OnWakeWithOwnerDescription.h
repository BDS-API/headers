#pragma once

#include "TriggerDescription.h"


class OnWakeWithOwnerDescription : TriggerDescription {

public:
    virtual void getJsonName()const;
    ~OnWakeWithOwnerDescription();
    OnWakeWithOwnerDescription();
};
