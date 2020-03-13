#pragma once

#include "ScriptContainerComponentBase.h"


class ScriptInventoryContainerComponent : ScriptContainerComponentBase {

public:
    static long mHash;

    ~ScriptInventoryContainerComponent(); // _ZN33ScriptInventoryContainerComponentD2Ev
    virtual void applyComponentTo(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle const&)const; // _ZNK33ScriptInventoryContainerComponent16applyComponentToERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextR5ActorRKNS0_18ScriptObjectHandleE
    virtual void retrieveComponentFrom(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle &)const; // _ZNK33ScriptInventoryContainerComponent21retrieveComponentFromERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextR5ActorRNS0_18ScriptObjectHandleE
    virtual bool hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, bool &)const; // _ZNK33ScriptInventoryContainerComponent12hasComponentERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextR5ActorRb
    void getHash(); // _ZN33ScriptInventoryContainerComponent7getHashEv
    ScriptInventoryContainerComponent(); // _ZN33ScriptInventoryContainerComponentC2Ev
};
