#pragma once

class ScriptActorAreaBinderComponent : ScriptBinderComponent {

    virtual ~ScriptActorAreaBinderComponent();
    virtual ~ScriptActorAreaBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
}
