#pragma once

#include "ComponentDescription.h"


class PreferredPathDescription : public ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK24PreferredPathDescription11getJsonNameEv
    virtual ~PreferredPathDescription(); // _ZN24PreferredPathDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN24PreferredPathDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK24PreferredPathDescription13serializeDataERN4Json5ValueE
    PreferredPathDescription(); // _ZN24PreferredPathDescriptionC2Ev
    PreferredPathDescription(float, float, int); // _ZN24PreferredPathDescriptionC2Effi
    bool isBlockAlreadyInSet(BlockLegacy const*)const; // _ZNK24PreferredPathDescription19isBlockAlreadyInSetEPK11BlockLegacy
};
