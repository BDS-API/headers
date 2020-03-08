#pragma once

#include "../../level/tickingarea/ITickingArea"
#include "../../actor/unmapped/ActorUniqueID"


class ScriptBinderActorTickingAreaTemplate : ScriptBinderTemplate {

public:
    virtual ScriptBinderActorTickingAreaTemplate::~ScriptBinderActorTickingAreaTemplate()
    virtual void getTemplateIdentifier()const;
    virtual void applyTemplate(ScriptObjectBinder &)const;

    void build(ITickingArea const&);
    void build(ActorUniqueID const&);
    ScriptBinderActorTickingAreaTemplate(void);
};
