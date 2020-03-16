#pragma once

#include "ComponentDescription.h"


class MoveControlDescription : public ComponentDescription {

public:
    virtual ~MoveControlDescription(); // _ZN22MoveControlDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN22MoveControlDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK22MoveControlDescription13serializeDataERN4Json5ValueE
    MoveControlDescription(); // _ZN22MoveControlDescriptionC2Ev
};
