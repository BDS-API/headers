#pragma once

class ScriptSpawnActorComponent : ScriptTemplateFactory_ltScriptServerContext_ge::Component {

public:
    static long ScriptSpawnActorComponent::mHash;

    virtual ~ScriptSpawnActorComponent();
    virtual void applyComponentTo(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void retrieveComponentFrom(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle &)const;
    virtual bool hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, bool &)const;

    void getHash(void);
    void ScriptSpawnActorComponent(void);
};
