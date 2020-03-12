#pragma once

#include "ScriptBinderComponent.h"


class ScriptComponentBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;

    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    ~ScriptComponentBinderComponent();
    void getData()const;
    ScriptComponentBinderComponent(ScriptApi::ScriptObjectHandle &&);
    ScriptComponentBinderComponent();
};
