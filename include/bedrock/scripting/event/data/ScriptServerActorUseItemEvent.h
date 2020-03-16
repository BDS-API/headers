#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerActorUseItemEvent : public ScriptEventData {

public:
    static long mHash;

    virtual ~ScriptServerActorUseItemEvent(); // _ZN29ScriptServerActorUseItemEventD2Ev
    virtual void __fake_function0(); // fake
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const; // _ZNK29ScriptServerActorUseItemEvent10_serializeER12ScriptEngineRN9ScriptApi18ScriptObjectHandleE
    void getHash(); // _ZN29ScriptServerActorUseItemEvent7getHashEv
    ScriptServerActorUseItemEvent(); // _ZN29ScriptServerActorUseItemEventC2Ev
    void setActorId(ActorUniqueID const&); // _ZN29ScriptServerActorUseItemEvent10setActorIdERK13ActorUniqueID
    void setItemStack(ItemInstance const&); // _ZN29ScriptServerActorUseItemEvent12setItemStackERK12ItemInstance
//    void setUseMethod(long); //TODO: incomplete function definition // _ZN29ScriptServerActorUseItemEvent12setUseMethodE13ItemUseMethod
    std::string getName(); // _ZN29ScriptServerActorUseItemEvent7getNameB5cxx11Ev
};
