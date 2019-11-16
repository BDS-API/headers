#pragma once

class ScriptEventDataBinderComponent : ScriptBinderComponent {

    virtual ~ScriptEventDataBinderComponent();
    virtual ~ScriptEventDataBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
}
