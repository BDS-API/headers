#pragma once



class MoveControlFlyDescription : MoveControlDescription {

public:
    virtual void getJsonName(void)const;
    virtual MoveControlFlyDescription::~MoveControlFlyDescription();

    MoveControlFlyDescription(void);
};
