#pragma once



class ScriptBinderEventDataTemplate : ScriptBinderTemplate {

public:
    virtual ScriptBinderEventDataTemplate::~ScriptBinderEventDataTemplate();
    virtual void getTemplateIdentifier[abi:cxx11](void)const;
    virtual void applyTemplate(ScriptObjectBinder &)const;

    void build(std::string const&, ScriptApi::ScriptObjectHandle &&);
    ScriptBinderEventDataTemplate(void);
};
