#pragma once

#include "ScriptBinderComponent.h"


class ScriptEcsBinderComponent : public ScriptBinderComponent {

public:
    static std::string TAG;

    virtual ~ScriptEcsBinderComponent(); // _ZN24ScriptEcsBinderComponentD2Ev
    virtual void __fake_function0(); // fake
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const; // _ZNK24ScriptEcsBinderComponent9serializeER12ScriptEngineRKN9ScriptApi18ScriptObjectHandleE
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&); // _ZN24ScriptEcsBinderComponent11deserializeER12ScriptEngineRKN9ScriptApi18ScriptObjectHandleE
    ScriptEcsBinderComponent(); // _ZN24ScriptEcsBinderComponentC2Ev
    ScriptEcsBinderComponent(unsigned int); // _ZN24ScriptEcsBinderComponentC2Ej
//    ScriptEcsBinderComponent(long &, Actor const&); //TODO: incomplete function definition // _ZN24ScriptEcsBinderComponentC2ERN4entt8RegistryIjEERK5Actor
//    ScriptEcsBinderComponent(long &, ItemActor const&); //TODO: incomplete function definition // _ZN24ScriptEcsBinderComponentC2ERN4entt8RegistryIjEERK9ItemActor
    void getIdentifier()const; // _ZNK24ScriptEcsBinderComponent13getIdentifierEv
};
