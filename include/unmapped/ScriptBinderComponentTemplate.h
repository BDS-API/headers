#pragma once



class ScriptBinderComponentTemplate : ScriptBinderTemplate {

public:
    virtual ScriptBinderComponentTemplate::~ScriptBinderComponentTemplate();
    virtual void getTemplateIdentifier[abi:cxx11](void)const;
    virtual void applyTemplate(ScriptObjectBinder &)const;

    void build(std::string const&, ScriptApi::ScriptObjectHandle &&);
    ScriptBinderComponentTemplate(void);
};
