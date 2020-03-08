#pragma once

#include "../unmapped/ScriptEngine"
#include "../ScriptObjectHandle"


class ScriptTickingAreaBinderComponent : ScriptBinderComponent {

public:
    static long TAG[abi:cxx11];

    virtual ScriptTickingAreaBinderComponent::~ScriptTickingAreaBinderComponent()
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    ScriptTickingAreaBinderComponent(void);
    ScriptTickingAreaBinderComponent(ScriptApi::ScriptObjectHandle &&);
    void getData()const;
};
