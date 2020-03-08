#pragma once

#include "../ScriptObjectHandle"
#include "../unmapped/ScriptEngine"


class ScriptComponentBinderComponent : ScriptBinderComponent {

public:
    static long TAG[abi:cxx11];

    ScriptComponentBinderComponent::~ScriptComponentBinderComponent()
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    ScriptComponentBinderComponent(void);
    ScriptComponentBinderComponent(ScriptApi::ScriptObjectHandle &&);
    void getData()const;
};
