#pragma once



class OnStartTakeoffDescription : TriggerDescription {

public:
    virtual void getJsonName(void)const;
    virtual OnStartTakeoffDescription::~OnStartTakeoffDescription();

    OnStartTakeoffDescription(void);
};
