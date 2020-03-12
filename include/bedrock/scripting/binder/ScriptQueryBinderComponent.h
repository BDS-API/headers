#pragma once

#include "../unmapped/ScriptEngine.h"
#include "../ScriptObjectHandle.h"
#include <string>
#include "ScriptBinderComponent.h"


class ScriptQueryBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;

    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
    ~ScriptQueryBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    void getIdentifier()const;
    ScriptQueryBinderComponent();
    ScriptQueryBinderComponent(unsigned int);
};
