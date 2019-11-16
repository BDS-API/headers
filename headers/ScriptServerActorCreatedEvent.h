#pragma once

class ScriptServerActorCreatedEvent : ScriptEventData {

    virtual void ~ScriptServerActorCreatedEvent();
    virtual void ~ScriptServerActorCreatedEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
}
