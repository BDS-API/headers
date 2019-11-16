#pragma once

class ScriptLevelAreaBinderComponent : ScriptBinderComponent {

    virtual void ~ScriptLevelAreaBinderComponent();
    virtual void ~ScriptLevelAreaBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
}
