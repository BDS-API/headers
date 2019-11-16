#pragma once

class ScriptQueryBinderComponent : ScriptBinderComponent {

    virtual void ScriptQueryBinderComponent::~ScriptQueryBinderComponent();
    virtual void ScriptQueryBinderComponent::~ScriptQueryBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
}
