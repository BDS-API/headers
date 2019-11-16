#pragma once

class ScriptBlockPositionBinderComponent : ScriptBinderComponent {

    virtual ~ScriptBlockPositionBinderComponent();
    virtual ~ScriptBlockPositionBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
}
