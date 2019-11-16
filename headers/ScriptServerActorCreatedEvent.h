#pragma once

class ScriptServerActorCreatedEvent : ScriptEventData {

    virtual ~ScriptServerActorCreatedEvent();
    virtual ~ScriptServerActorCreatedEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
}
