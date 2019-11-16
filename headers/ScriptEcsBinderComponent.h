#pragma once

class ScriptEcsBinderComponent : ScriptBinderComponent {

    virtual ~ScriptEcsBinderComponent();
    virtual ~ScriptEcsBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
}
