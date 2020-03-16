#pragma once

#include "ComponentDescription.h"


class BehaviorTreeDescription : public ComponentDescription {

public:
    virtual void getJsonName()const; // _ZNK23BehaviorTreeDescription11getJsonNameEv
    virtual ~BehaviorTreeDescription(); // _ZN23BehaviorTreeDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN23BehaviorTreeDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK23BehaviorTreeDescription13serializeDataERN4Json5ValueE
    BehaviorTreeDescription(); // _ZN23BehaviorTreeDescriptionC2Ev
};
