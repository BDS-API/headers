#pragma once

class ScriptBinderComponentTemplate : ScriptBinderTemplate {

public:
    virtual ~ScriptBinderComponentTemplate();
    virtual void applyTemplate(ScriptObjectBinder &)const;

    void build(std::string const&, ScriptApi::ScriptObjectHandle &&);
    void ScriptBinderComponentTemplate(void);
};
