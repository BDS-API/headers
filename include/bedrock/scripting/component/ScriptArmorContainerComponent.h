#pragma once

#include "ScriptContainerComponentBase.h"


class ScriptArmorContainerComponent : ScriptContainerComponentBase {

public:
    static long mHash;

    ~ScriptArmorContainerComponent(); // _ZN29ScriptArmorContainerComponentD2Ev
    virtual void applyComponentTo(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle const&)const; // _ZNK29ScriptArmorContainerComponent16applyComponentToERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextR5ActorRKNS0_18ScriptObjectHandleE
    virtual void retrieveComponentFrom(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle &)const; // _ZNK29ScriptArmorContainerComponent21retrieveComponentFromERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextR5ActorRNS0_18ScriptObjectHandleE
    virtual bool hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, bool &)const; // _ZNK29ScriptArmorContainerComponent12hasComponentERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextR5ActorRb
    void getHash(); // _ZN29ScriptArmorContainerComponent7getHashEv
    ScriptArmorContainerComponent(); // _ZN29ScriptArmorContainerComponentC2Ev
};
