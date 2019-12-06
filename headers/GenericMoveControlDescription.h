#pragma once

class GenericMoveControlDescription : MoveControlDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~GenericMoveControlDescription();

    void GenericMoveControlDescription(void);
};
