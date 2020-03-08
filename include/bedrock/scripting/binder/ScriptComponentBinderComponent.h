#pragma once

#include "../unmapped/ScriptEngine"
#include "../ScriptObjectHandle"


class ScriptComponentBinderComponent : ScriptBinderComponent {

public:
    static long TAG[abi:cxx11];

    virtual ScriptComponentBinderComponent::~ScriptComponentBinderComponent()
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    ScriptComponentBinderComponent(void);
    ScriptComponentBinderComponent(ScriptApi::ScriptObjectHandle &&);
    void getData()const;
};
