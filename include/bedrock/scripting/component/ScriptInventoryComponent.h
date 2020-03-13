#pragma once

#include <string>


class ScriptInventoryComponent /*ScriptTemplateFactory<ScriptServerContext>::Component*/ { //TODO: incomplete class definition

public:
    static long mHash;

    ~ScriptInventoryComponent(); // _ZN24ScriptInventoryComponentD2Ev
    virtual void applyComponentTo(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle const&)const; // _ZNK24ScriptInventoryComponent16applyComponentToERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextR5ActorRKNS0_18ScriptObjectHandleE
    virtual void retrieveComponentFrom(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle &)const; // _ZNK24ScriptInventoryComponent21retrieveComponentFromERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextR5ActorRNS0_18ScriptObjectHandleE
    virtual bool hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, bool &)const; // _ZNK24ScriptInventoryComponent12hasComponentERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextR5ActorRb
    void getHash(); // _ZN24ScriptInventoryComponent7getHashEv
    ScriptInventoryComponent(); // _ZN24ScriptInventoryComponentC2Ev
    std::string getName(); // _ZN24ScriptInventoryComponent7getNameB5cxx11Ev
};
