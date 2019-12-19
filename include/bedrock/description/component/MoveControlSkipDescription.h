#pragma once

class MoveControlSkipDescription : MoveControlDescription {

public:
    virtual void getJsonName(void)const;
    virtual MoveControlSkipDescription::~MoveControlSkipDescription();

    MoveControlSkipDescription(void);
};
