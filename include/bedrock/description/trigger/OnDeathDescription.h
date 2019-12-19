#pragma once

class OnDeathDescription : TriggerDescription {

public:
    virtual void getJsonName(void)const;
    virtual OnDeathDescription::~OnDeathDescription();

    OnDeathDescription(void);
};
