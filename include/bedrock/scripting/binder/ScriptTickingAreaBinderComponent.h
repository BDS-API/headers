#pragma once

#include "ScriptBinderComponent.h"


class ScriptTickingAreaBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;

    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    ~ScriptTickingAreaBinderComponent();
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
    void getData()const;
    ScriptTickingAreaBinderComponent(ScriptApi::ScriptObjectHandle &&);
    ScriptTickingAreaBinderComponent();
};
