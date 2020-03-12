#pragma once

#include "../unmapped/ScriptEngine.h"
#include "../ScriptObjectHandle.h"
#include <string>
#include "ScriptBinderComponent.h"


class ScriptComponentBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;

    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    ~ScriptComponentBinderComponent();
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
    ScriptComponentBinderComponent(ScriptApi::ScriptObjectHandle &&);
    void getData()const;
    ScriptComponentBinderComponent();
};
