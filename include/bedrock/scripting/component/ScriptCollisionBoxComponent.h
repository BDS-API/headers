#pragma once

#include <string>


class ScriptCollisionBoxComponent /*ScriptTemplateFactory<ScriptServerContext>::Component*/ { //TODO: incomplete class definition

public:
    static long mHash;

    ~ScriptCollisionBoxComponent(); // _ZN27ScriptCollisionBoxComponentD2Ev
    virtual void applyComponentTo(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle const&)const; // _ZNK27ScriptCollisionBoxComponent16applyComponentToERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextR5ActorRKNS0_18ScriptObjectHandleE
    virtual void retrieveComponentFrom(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle &)const; // _ZNK27ScriptCollisionBoxComponent21retrieveComponentFromERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextR5ActorRNS0_18ScriptObjectHandleE
    virtual bool hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, bool &)const; // _ZNK27ScriptCollisionBoxComponent12hasComponentERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextR5ActorRb
    void getHash(); // _ZN27ScriptCollisionBoxComponent7getHashEv
    ScriptCollisionBoxComponent(); // _ZN27ScriptCollisionBoxComponentC2Ev
    std::string getName(); // _ZN27ScriptCollisionBoxComponent7getNameB5cxx11Ev
};
