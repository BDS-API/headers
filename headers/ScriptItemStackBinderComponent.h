#pragma once

class ScriptItemStackBinderComponent : ScriptBinderComponent {

    virtual void ~ScriptItemStackBinderComponent();
    virtual void ~ScriptItemStackBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
}
