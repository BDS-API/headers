#pragma once



class GenericMoveControlDescription : MoveControlDescription {

public:
    virtual void getJsonName()const;
    virtual GenericMoveControlDescription::~GenericMoveControlDescription()

    GenericMoveControlDescription(void);
};
