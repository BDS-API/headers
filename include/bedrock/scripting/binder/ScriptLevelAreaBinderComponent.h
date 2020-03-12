#pragma once

#include "ScriptBinderComponent.h"


class ScriptLevelAreaBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;

    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
    ~ScriptLevelAreaBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    ScriptLevelAreaBinderComponent(ITickingArea const&);
    ScriptLevelAreaBinderComponent();
    void getIdentifier()const;
    ScriptLevelAreaBinderComponent(mce::UUID const&);
};
