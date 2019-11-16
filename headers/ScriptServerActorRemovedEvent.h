#pragma once

class ScriptServerActorRemovedEvent : ScriptEventData {

    virtual ~ScriptServerActorRemovedEvent();
    virtual ~ScriptServerActorRemovedEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
}
