#pragma once

class MoveControlHoverDescription : MoveControlDescription {

public:
    virtual void getJsonName(void)const;
    virtual MoveControlHoverDescription::~MoveControlHoverDescription();

    MoveControlHoverDescription(void);
};
