#pragma once

class ScriptServerActorTickEvent : ScriptEventData {

    virtual void ~ScriptServerActorTickEvent();
    virtual void ~ScriptServerActorTickEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
}
