#pragma once



class GenericMoveControlDescription : MoveControlDescription {

public:
    virtual void getJsonName()const;
    GenericMoveControlDescription::~GenericMoveControlDescription()

    GenericMoveControlDescription(void);
};
