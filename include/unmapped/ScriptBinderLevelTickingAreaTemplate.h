#pragma once

#include "../bedrock/level/tickingarea/ITickingArea"


class ScriptBinderLevelTickingAreaTemplate : ScriptBinderTemplate {

public:
    virtual ScriptBinderLevelTickingAreaTemplate::~ScriptBinderLevelTickingAreaTemplate();
    virtual void getTemplateIdentifier[abi:cxx11](void)const;
    virtual void applyTemplate(ScriptObjectBinder &)const;

    void build(ITickingArea const&);
    ScriptBinderLevelTickingAreaTemplate(void);
};
