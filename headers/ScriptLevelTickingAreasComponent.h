#pragma once

class ScriptLevelTickingAreasComponent : ScriptTemplateFactory_ltScriptServerContext_ge::Component {

public:
    static long ScriptLevelTickingAreasComponent::mHash;

    virtual ~ScriptLevelTickingAreasComponent();
    virtual bool hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, bool &)const;
    virtual void applyComponentTo(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Level &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void retrieveComponentFrom(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Level &, ScriptApi::ScriptObjectHandle &)const;
    virtual bool hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Level &, bool &)const;

    void getHash(void);
    void ScriptLevelTickingAreasComponent(void);
};
