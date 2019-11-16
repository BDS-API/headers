#pragma once

class ScriptIdentifierBinderComponent : ScriptBinderComponent {

    virtual ~ScriptIdentifierBinderComponent();
    virtual ~ScriptIdentifierBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
}
