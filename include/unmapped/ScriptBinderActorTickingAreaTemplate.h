#pragma once

#include "../bedrock/level/tickingarea/ITickingArea"


class ScriptBinderActorTickingAreaTemplate : ScriptBinderTemplate {

public:
    virtual ScriptBinderActorTickingAreaTemplate::~ScriptBinderActorTickingAreaTemplate();
    virtual void getTemplateIdentifier[abi:cxx11](void)const;
    virtual void applyTemplate(ScriptObjectBinder &)const;

    void build(ITickingArea const&);
    void build(ActorUniqueID const&);
    ScriptBinderActorTickingAreaTemplate(void);
};
