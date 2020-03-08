#pragma once

#include "../unmapped/ScriptEngine"
#include "../../util/BlockPos"
#include "../ScriptObjectHandle"


class ScriptBlockPositionBinderComponent : ScriptBinderComponent {

public:
    static long TAG[abi:cxx11];

    virtual ScriptBlockPositionBinderComponent::~ScriptBlockPositionBinderComponent()
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    ScriptBlockPositionBinderComponent(void);
    ScriptBlockPositionBinderComponent(BlockPos const&);
    void getPosition()const;
};
