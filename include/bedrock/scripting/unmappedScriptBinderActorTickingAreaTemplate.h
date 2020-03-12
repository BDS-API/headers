#pragma once

#include "../../actor/unmapped/ActorUniqueID.h"
#include "ScriptObjectBinder.h"
#include "ScriptBinderTemplate.h"
#include "../../level/tickingarea/ITickingArea.h"


class ScriptBinderActorTickingAreaTemplate : ScriptBinderTemplate {

public:
    ~ScriptBinderActorTickingAreaTemplate();
    virtual void applyTemplate(ScriptObjectBinder &)const;
    virtual std::string getTemplateIdentifier()const;
    void build(ITickingArea const&);
    ScriptBinderActorTickingAreaTemplate();
    void build(ActorUniqueID const&);
};
