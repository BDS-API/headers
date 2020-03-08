#pragma once

#include "../unmapped/ScriptEngine"
#include "../ScriptObjectHandle"


class ScriptQueryBinderComponent : ScriptBinderComponent {

public:
    static long TAG[abi:cxx11];

    virtual ScriptQueryBinderComponent::~ScriptQueryBinderComponent()
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    ScriptQueryBinderComponent(void);
    ScriptQueryBinderComponent(unsigned int);
    void getIdentifier()const;
};
