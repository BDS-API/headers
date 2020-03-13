#pragma once

#include "ScriptContainerComponentBase.h"


class ScriptHotbarContainerComponent : ScriptContainerComponentBase {

public:
    static long mHash;

    ~ScriptHotbarContainerComponent(); // _ZN30ScriptHotbarContainerComponentD2Ev
    virtual void applyComponentTo(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle const&)const; // _ZNK30ScriptHotbarContainerComponent16applyComponentToERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextR5ActorRKNS0_18ScriptObjectHandleE
    virtual void retrieveComponentFrom(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle &)const; // _ZNK30ScriptHotbarContainerComponent21retrieveComponentFromERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextR5ActorRNS0_18ScriptObjectHandleE
    virtual bool hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, bool &)const; // _ZNK30ScriptHotbarContainerComponent12hasComponentERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextR5ActorRb
    void getHash(); // _ZN30ScriptHotbarContainerComponent7getHashEv
    ScriptHotbarContainerComponent(); // _ZN30ScriptHotbarContainerComponentC2Ev
};
