#pragma once

#include "../unmapped/ScriptEngine.h"
#include "../ScriptObjectHandle.h"
#include "./ScriptBinderComponent.h"


class ScriptLevelBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;

    virtual ~ScriptLevelBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    ScriptLevelBinderComponent();
    ScriptLevelBinderComponent(unsigned int);
    void getIdentifier()const;
};
