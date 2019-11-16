#pragma once

class ScriptEventDataBinderComponent : ScriptBinderComponent {

    virtual void ~ScriptEventDataBinderComponent();
    virtual void ~ScriptEventDataBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
}
