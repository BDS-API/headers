#pragma once

#include "TriggerDescription.h"


class OnHurtByPlayerDescription : TriggerDescription {

public:
    ~OnHurtByPlayerDescription();
    virtual void getJsonName()const;
    OnHurtByPlayerDescription();
};
