#pragma once

#include "../ScriptObjectHandle"
#include "../../item/ItemInstance"
#include "../unmapped/ScriptEngine"


class ScriptItemStackBinderComponent : ScriptBinderComponent {

public:
    static long TAG[abi:cxx11];
    static long COUNT[abi:cxx11];
    static long ITEM[abi:cxx11];
    static long UNDEFINED[abi:cxx11];

    virtual ScriptItemStackBinderComponent::~ScriptItemStackBinderComponent()
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    ScriptItemStackBinderComponent(void);
    ScriptItemStackBinderComponent(entt::Registry<unsigned int> &, ItemInstance const&);
    void getIdentifier()const;
};
