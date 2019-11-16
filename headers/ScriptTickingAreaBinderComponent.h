#pragma once

class ScriptTickingAreaBinderComponent : ScriptBinderComponent {

    virtual void ~ScriptTickingAreaBinderComponent();
    virtual void ~ScriptTickingAreaBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
}
