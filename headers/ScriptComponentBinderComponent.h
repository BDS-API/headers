#pragma once

class ScriptComponentBinderComponent : ScriptBinderComponent {

    virtual void ~ScriptComponentBinderComponent();
    virtual void ~ScriptComponentBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
}
