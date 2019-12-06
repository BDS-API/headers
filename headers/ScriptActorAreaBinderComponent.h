#pragma once

class ScriptActorAreaBinderComponent : ScriptBinderComponent {

public:
    virtual ~ScriptActorAreaBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    void ScriptActorAreaBinderComponent(void);
    void ScriptActorAreaBinderComponent(ActorUniqueID);
    void ScriptActorAreaBinderComponent(ITickingArea const&);
    void getIdentifier(void)const;
};
