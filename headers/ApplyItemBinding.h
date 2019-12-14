#pragma once

class ApplyItemBinding : ScriptTemplateFactory<ScriptServerContext>::Entity {

public:
    virtual ~ApplyItemBinding();
    virtual void createAndApplyTemplate(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor **, std::string const&)const;

    void ApplyItemBinding(void);
};
