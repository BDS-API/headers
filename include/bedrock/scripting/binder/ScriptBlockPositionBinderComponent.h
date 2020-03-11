#pragma once

#include "../unmapped/ScriptEngine.h"
#include "../ScriptObjectHandle.h"
#include "./ScriptBinderComponent.h"
#include "../../util/BlockPos.h"


class ScriptBlockPositionBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;

    virtual ~ScriptBlockPositionBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    ScriptBlockPositionBinderComponent();
    ScriptBlockPositionBinderComponent(BlockPos const&);
    void getPosition()const;
};
