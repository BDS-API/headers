#pragma once

#include "../unmapped/ScriptEngine.h"
#include "../ScriptObjectHandle.h"
#include <string>
#include "ScriptBinderComponent.h"


class ScriptEventDataBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;

    ~ScriptEventDataBinderComponent();
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    ScriptEventDataBinderComponent();
    void getData()const;
    ScriptEventDataBinderComponent(ScriptApi::ScriptObjectHandle &&);
};
