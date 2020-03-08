#pragma once

#include "../ScriptObjectHandle"
#include "../unmapped/ScriptEngine"


class ScriptTickingAreaBinderComponent : ScriptBinderComponent {

public:
    static long TAG[abi:cxx11];

    ScriptTickingAreaBinderComponent::~ScriptTickingAreaBinderComponent()
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    ScriptTickingAreaBinderComponent(void);
    ScriptTickingAreaBinderComponent(ScriptApi::ScriptObjectHandle &&);
    void getData()const;
};
