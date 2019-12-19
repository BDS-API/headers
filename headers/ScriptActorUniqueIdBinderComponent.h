#pragma once

class ScriptActorUniqueIdBinderComponent : ScriptBinderComponent {

public:
    static long TAG[abi:cxx11];

    virtual ~ScriptActorUniqueIdBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    void ScriptActorUniqueIdBinderComponent(void);
    void ScriptActorUniqueIdBinderComponent(ActorUniqueID);
    void ScriptActorUniqueIdBinderComponent(Actor const&);
    void ScriptActorUniqueIdBinderComponent(ItemActor const&);
    void getIdentifier(void)const;
};
