#pragma once

class ScriptServerActorTickEvent : ScriptEventData {

    virtual ~ScriptServerActorTickEvent();
    virtual ~ScriptServerActorTickEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
}
