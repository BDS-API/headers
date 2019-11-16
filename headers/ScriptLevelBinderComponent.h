#pragma once

class ScriptLevelBinderComponent : ScriptBinderComponent {

    virtual ~ScriptLevelBinderComponent();
    virtual ~ScriptLevelBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
}
