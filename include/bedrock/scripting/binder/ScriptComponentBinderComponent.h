#pragma once

#include "../unmapped/ScriptEngine.h"
#include "../ScriptObjectHandle.h"
#include "./ScriptBinderComponent.h"


class ScriptComponentBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;

    virtual ~ScriptComponentBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    ScriptComponentBinderComponent();
    ScriptComponentBinderComponent(ScriptApi::ScriptObjectHandle &&);
    void getData()const;
};
