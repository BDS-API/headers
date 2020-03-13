#pragma once

#include "ScriptBinderComponent.h"


class ScriptItemStackBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;
    static std::string COUNT;
    static std::string ITEM;
    static std::string UNDEFINED;

    ~ScriptItemStackBinderComponent(); // _ZN30ScriptItemStackBinderComponentD2Ev
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const; // _ZNK30ScriptItemStackBinderComponent9serializeER12ScriptEngineRKN9ScriptApi18ScriptObjectHandleE
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&); // _ZN30ScriptItemStackBinderComponent11deserializeER12ScriptEngineRKN9ScriptApi18ScriptObjectHandleE
    ScriptItemStackBinderComponent(); // _ZN30ScriptItemStackBinderComponentC2Ev
//  ScriptItemStackBinderComponent(entt::Registry<unsigned int> &, ItemInstance const&); //TODO: incomplete function definition // _ZN30ScriptItemStackBinderComponentC2ERN4entt8RegistryIjEERK12ItemInstance
    void getIdentifier()const; // _ZNK30ScriptItemStackBinderComponent13getIdentifierEv
};
