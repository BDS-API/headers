#pragma once

#include "ScriptBinderComponent.h"


class ScriptQueryBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;

    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
    ~ScriptQueryBinderComponent();
    void getIdentifier()const;
    ScriptQueryBinderComponent();
    ScriptQueryBinderComponent(unsigned int);
};
