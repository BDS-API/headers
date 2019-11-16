#pragma once

class ScriptBinderComponent {

    virtual void ScriptBinderComponent::~ScriptBinderComponent();
    virtual void ScriptBinderComponent::~ScriptBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
}
