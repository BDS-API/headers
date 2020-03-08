#pragma once

#include "../../actor/Actor"
#include "../ScriptObjectHandle"
#include "../../actor/ItemActor"
#include "../unmapped/ScriptEngine"


class ScriptEcsBinderComponent : ScriptBinderComponent {

public:
    static long TAG[abi:cxx11];

    virtual ScriptEcsBinderComponent::~ScriptEcsBinderComponent()
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    ScriptEcsBinderComponent(void);
    ScriptEcsBinderComponent(unsigned int);
    ScriptEcsBinderComponent(entt::Registry<unsigned int> &, Actor const&);
    ScriptEcsBinderComponent(entt::Registry<unsigned int> &, ItemActor const&);
    void getIdentifier()const;
};
