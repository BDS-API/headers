#pragma once

#include "../../util/BlockPos"
#include "../ScriptObjectHandle"
#include "../unmapped/ScriptEngine"


class ScriptBlockPositionBinderComponent : ScriptBinderComponent {

public:
    static long TAG[abi:cxx11];

    ScriptBlockPositionBinderComponent::~ScriptBlockPositionBinderComponent()
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    ScriptBlockPositionBinderComponent(void);
    ScriptBlockPositionBinderComponent(BlockPos const&);
    void getPosition()const;
};
