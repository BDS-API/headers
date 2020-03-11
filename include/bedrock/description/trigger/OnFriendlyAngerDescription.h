#pragma once

#include "./TriggerDescription.h"


class OnFriendlyAngerDescription : TriggerDescription {

public:
    virtual void getJsonName()const;
    virtual ~OnFriendlyAngerDescription();

    OnFriendlyAngerDescription();
};
