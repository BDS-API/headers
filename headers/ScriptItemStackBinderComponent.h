#pragma once

class ScriptItemStackBinderComponent : ScriptBinderComponent {

    virtual ~ScriptItemStackBinderComponent();
    virtual ~ScriptItemStackBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
}
