#pragma once

#include "ScriptBinderComponent.h"


class ScriptBlockPositionBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;

    ~ScriptBlockPositionBinderComponent();
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    void getPosition()const;
    ScriptBlockPositionBinderComponent(BlockPos const&);
    ScriptBlockPositionBinderComponent();
};
