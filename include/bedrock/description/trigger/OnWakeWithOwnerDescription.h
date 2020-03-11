#pragma once

#include "./TriggerDescription.h"


class OnWakeWithOwnerDescription : TriggerDescription {

public:
    virtual void getJsonName()const;
    virtual ~OnWakeWithOwnerDescription();

    OnWakeWithOwnerDescription();
};
