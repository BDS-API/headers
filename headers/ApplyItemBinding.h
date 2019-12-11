#pragma once

class ApplyItemBinding : ScriptTemplateFactory<ScriptServerContext>::Entity {

public:
    virtual ~ApplyItemBinding();
    virtual void createAndApplyTemplate(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor **, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;

    void ApplyItemBinding(void);
};
