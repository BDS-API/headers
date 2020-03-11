#pragma once

#include "./TriggerDescription.h"


class OnHurtByPlayerDescription : TriggerDescription {

public:
    virtual void getJsonName()const;
    virtual ~OnHurtByPlayerDescription();

    OnHurtByPlayerDescription();
};
