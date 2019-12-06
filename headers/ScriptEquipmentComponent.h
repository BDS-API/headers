#pragma once

class ScriptEquipmentComponent : ScriptTemplateFactory_ltScriptServerContext_ge::Component {

public:
    static long ScriptEquipmentComponent::mHash;

    virtual ~ScriptEquipmentComponent();
    virtual void applyComponentTo(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void retrieveComponentFrom(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle &)const;
    virtual bool hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, bool &)const;

    void getHash(void);
    void ScriptEquipmentComponent(void);
};
