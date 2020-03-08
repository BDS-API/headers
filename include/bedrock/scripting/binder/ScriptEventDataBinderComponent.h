#pragma once

#include "../ScriptObjectHandle"
#include "../unmapped/ScriptEngine"


class ScriptEventDataBinderComponent : ScriptBinderComponent {

public:
    static long TAG[abi:cxx11];

    ScriptEventDataBinderComponent::~ScriptEventDataBinderComponent()
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    ScriptEventDataBinderComponent(void);
    ScriptEventDataBinderComponent(ScriptApi::ScriptObjectHandle &&);
    void getData()const;
};
