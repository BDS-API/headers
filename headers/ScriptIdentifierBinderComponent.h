#pragma once

class ScriptIdentifierBinderComponent : ScriptBinderComponent {

    virtual void ScriptIdentifierBinderComponent::~ScriptIdentifierBinderComponent();
    virtual void ScriptIdentifierBinderComponent::~ScriptIdentifierBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
}
