#pragma once

class ScriptBinderLevelTickingAreaTemplate : ScriptBinderTemplate {

public:
    virtual ~ScriptBinderLevelTickingAreaTemplate();
    virtual void getTemplateIdentifier[abi:cxx11](void)const;
    virtual void applyTemplate(ScriptObjectBinder &)const;

    void build(ITickingArea const&);
    void ScriptBinderLevelTickingAreaTemplate(void);
};
