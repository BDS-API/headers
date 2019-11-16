#pragma once

class ScriptQueryBinderComponent : ScriptBinderComponent {

    virtual ~ScriptQueryBinderComponent();
    virtual ~ScriptQueryBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
}
