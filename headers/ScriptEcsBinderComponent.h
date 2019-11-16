#pragma once

class ScriptEcsBinderComponent : ScriptBinderComponent {

    virtual void ~ScriptEcsBinderComponent();
    virtual void ~ScriptEcsBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
}
