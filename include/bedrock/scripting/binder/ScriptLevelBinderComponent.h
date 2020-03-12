#pragma once

#include "../unmapped/ScriptEngine.h"
#include "../ScriptObjectHandle.h"
#include <string>
#include "ScriptBinderComponent.h"


class ScriptLevelBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;

    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
    ~ScriptLevelBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    ScriptLevelBinderComponent(unsigned int);
    void getIdentifier()const;
    ScriptLevelBinderComponent();
};
