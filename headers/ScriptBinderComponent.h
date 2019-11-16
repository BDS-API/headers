#pragma once

class ScriptBinderComponent {

    virtual ~ScriptBinderComponent();
    virtual ~ScriptBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
}
