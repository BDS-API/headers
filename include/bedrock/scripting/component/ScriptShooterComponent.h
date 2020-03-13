#pragma once

#include <string>


class ScriptShooterComponent /*ScriptTemplateFactory<ScriptServerContext>::Component*/ { //TODO: incomplete class definition

public:
    static long mHash;

    ~ScriptShooterComponent(); // _ZN22ScriptShooterComponentD2Ev
    virtual void applyComponentTo(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle const&)const; // _ZNK22ScriptShooterComponent16applyComponentToERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextR5ActorRKNS0_18ScriptObjectHandleE
    virtual void retrieveComponentFrom(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle &)const; // _ZNK22ScriptShooterComponent21retrieveComponentFromERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextR5ActorRNS0_18ScriptObjectHandleE
    virtual bool hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, bool &)const; // _ZNK22ScriptShooterComponent12hasComponentERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextR5ActorRb
    void getHash(); // _ZN22ScriptShooterComponent7getHashEv
    ScriptShooterComponent(); // _ZN22ScriptShooterComponentC2Ev
    std::string getName(); // _ZN22ScriptShooterComponent7getNameB5cxx11Ev
};
