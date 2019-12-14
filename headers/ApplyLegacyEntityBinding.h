#pragma once

class ApplyLegacyEntityBinding : ScriptTemplateFactory<ScriptServerContext>::Entity {

public:
    virtual ~ApplyLegacyEntityBinding();
    virtual void createAndApplyTemplate(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor **, std::string const&)const;

    void ApplyLegacyEntityBinding(void);
};
