#pragma once



class MoveControlBasicDescription : MoveControlDescription {

public:
    virtual void getJsonName(void)const;
    virtual MoveControlBasicDescription::~MoveControlBasicDescription();

    MoveControlBasicDescription(void);
};
