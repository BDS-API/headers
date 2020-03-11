#pragma once

#include "../unmapped/ScriptEngine.h"
#include "../ScriptObjectHandle.h"
#include "./ScriptBinderComponent.h"


class ScriptQueryBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;

    virtual ~ScriptQueryBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    ScriptQueryBinderComponent();
    ScriptQueryBinderComponent(unsigned int);
    void getIdentifier()const;
};
