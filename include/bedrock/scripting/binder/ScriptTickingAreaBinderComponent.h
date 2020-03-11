#pragma once

#include "../unmapped/ScriptEngine.h"
#include "../ScriptObjectHandle.h"
#include "./ScriptBinderComponent.h"


class ScriptTickingAreaBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;

    virtual ~ScriptTickingAreaBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    ScriptTickingAreaBinderComponent();
    ScriptTickingAreaBinderComponent(ScriptApi::ScriptObjectHandle &&);
    void getData()const;
};
