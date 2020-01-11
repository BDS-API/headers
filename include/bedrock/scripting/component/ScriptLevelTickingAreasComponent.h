#pragma once

class ScriptLevelTickingAreasComponent : ScriptTemplateFactory<ScriptServerContext>::Component {

public:
    static long mHash;

    virtual ScriptLevelTickingAreasComponent::~ScriptLevelTickingAreasComponent();
    virtual bool hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, bool &)const;
    virtual void applyComponentTo(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Level &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void retrieveComponentFrom(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Level &, ScriptApi::ScriptObjectHandle &)const;
    virtual bool hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Level &, bool &)const;

    void getHash(void);
    ScriptLevelTickingAreasComponent(void);
};
