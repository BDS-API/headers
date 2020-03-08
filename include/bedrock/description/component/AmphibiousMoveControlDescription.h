#pragma once



class AmphibiousMoveControlDescription : MoveControlDescription {

public:
    virtual void getJsonName(void)const;
    virtual AmphibiousMoveControlDescription::~AmphibiousMoveControlDescription();

    AmphibiousMoveControlDescription(void);
};
