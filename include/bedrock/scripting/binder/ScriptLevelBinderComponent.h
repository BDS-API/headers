#pragma once

#include "ScriptBinderComponent.h"


class ScriptLevelBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;

    ~ScriptLevelBinderComponent();
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    ScriptLevelBinderComponent();
    ScriptLevelBinderComponent(unsigned int);
    void getIdentifier()const;
};
