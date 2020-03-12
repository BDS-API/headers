#pragma once

#include "ScriptBinderComponent.h"


class ScriptEventDataBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;

    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
    ~ScriptEventDataBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    ScriptEventDataBinderComponent();
    void getData()const;
    ScriptEventDataBinderComponent(ScriptApi::ScriptObjectHandle &&);
};
