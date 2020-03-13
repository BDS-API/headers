#pragma once

#include <string>


class ScriptNameableComponent /*ScriptTemplateFactory<ScriptServerContext>::Component*/ { //TODO: incomplete class definition

public:
    static long mHash;

    ~ScriptNameableComponent(); // _ZN23ScriptNameableComponentD2Ev
    virtual void applyComponentTo(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle const&)const; // _ZNK23ScriptNameableComponent16applyComponentToERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextR5ActorRKNS0_18ScriptObjectHandleE
    virtual void retrieveComponentFrom(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle &)const; // _ZNK23ScriptNameableComponent21retrieveComponentFromERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextR5ActorRNS0_18ScriptObjectHandleE
    virtual bool hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, bool &)const; // _ZNK23ScriptNameableComponent12hasComponentERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextR5ActorRb
    void getHash(); // _ZN23ScriptNameableComponent7getHashEv
    ScriptNameableComponent(); // _ZN23ScriptNameableComponentC2Ev
    std::string getName(); // _ZN23ScriptNameableComponent7getNameB5cxx11Ev
};
