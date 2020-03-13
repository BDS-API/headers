#pragma once

#include "ComponentDescription.h"


class MoveControlDescription : ComponentDescription {

public:
    ~MoveControlDescription(); // _ZN22MoveControlDescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN22MoveControlDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK22MoveControlDescription13serializeDataERN4Json5ValueE
    MoveControlDescription(); // _ZN22MoveControlDescriptionC2Ev
};
