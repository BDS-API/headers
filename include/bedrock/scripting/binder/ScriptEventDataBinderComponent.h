#pragma once

#include "../unmapped/ScriptEngine.h"
#include "../ScriptObjectHandle.h"
#include "./ScriptBinderComponent.h"


class ScriptEventDataBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;

    virtual ~ScriptEventDataBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    ScriptEventDataBinderComponent();
    ScriptEventDataBinderComponent(ScriptApi::ScriptObjectHandle &&);
    void getData()const;
};
