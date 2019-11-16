#pragma once

class ScriptActorUniqueIdBinderComponent : ScriptBinderComponent {

    virtual void ~ScriptActorUniqueIdBinderComponent();
    virtual void ~ScriptActorUniqueIdBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
}
