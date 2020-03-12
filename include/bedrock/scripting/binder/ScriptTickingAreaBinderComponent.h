#pragma once

#include "../unmapped/ScriptEngine.h"
#include "../ScriptObjectHandle.h"
#include <string>
#include "ScriptBinderComponent.h"


class ScriptTickingAreaBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;

    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    ~ScriptTickingAreaBinderComponent();
    void getData()const;
    ScriptTickingAreaBinderComponent(ScriptApi::ScriptObjectHandle &&);
    ScriptTickingAreaBinderComponent();
};
