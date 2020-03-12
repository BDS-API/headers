#pragma once

#include "../ScriptObjectHandle.h"
#include <string>
#include "../unmapped/ScriptEngine.h"
#include "../../util/BlockPos.h"
#include "ScriptBinderComponent.h"


class ScriptBlockPositionBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;

    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    ~ScriptBlockPositionBinderComponent();
    ScriptBlockPositionBinderComponent(BlockPos const&);
    void getPosition()const;
    ScriptBlockPositionBinderComponent();
};
