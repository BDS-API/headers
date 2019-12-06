#pragma once

class ApplyLegacyEntityBinding : ScriptTemplateFactory_ltScriptServerContext_ge::Entity {

public:
    virtual ~ApplyLegacyEntityBinding();
    virtual void createAndApplyTemplate(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor **, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;

    void ApplyLegacyEntityBinding(void);
};
