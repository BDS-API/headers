#pragma once

class OnHurtByPlayerDescription : TriggerDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~OnHurtByPlayerDescription();

    void OnHurtByPlayerDescription(void);
};
