#pragma once

class ScriptLevelAreaBinderComponent : ScriptBinderComponent {

    virtual ~ScriptLevelAreaBinderComponent();
    virtual ~ScriptLevelAreaBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
}
