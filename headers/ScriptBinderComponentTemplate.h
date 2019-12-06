#pragma once

class ScriptBinderComponentTemplate : ScriptBinderTemplate {

public:
    virtual ~ScriptBinderComponentTemplate();
    virtual void applyTemplate(ScriptObjectBinder &)const;

    void build(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ScriptApi::ScriptObjectHandle &&);
    void ScriptBinderComponentTemplate(void);
};
