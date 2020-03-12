#pragma once

#include "TriggerDescription.h"


class OnWakeWithOwnerDescription : TriggerDescription {

public:
    ~OnWakeWithOwnerDescription();
    virtual void getJsonName()const;
    OnWakeWithOwnerDescription();
};
