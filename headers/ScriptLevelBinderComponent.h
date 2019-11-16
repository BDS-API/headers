#pragma once

class ScriptLevelBinderComponent : ScriptBinderComponent {

    virtual void ~ScriptLevelBinderComponent();
    virtual void ~ScriptLevelBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
}
