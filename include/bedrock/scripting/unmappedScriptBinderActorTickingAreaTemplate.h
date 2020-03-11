#pragma once

#include "./ScriptBinderTemplate.h"
#include "../../level/tickingarea/ITickingArea.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "./ScriptObjectBinder.h"
#include <string>


class ScriptBinderActorTickingAreaTemplate : ScriptBinderTemplate {

public:
    virtual ~ScriptBinderActorTickingAreaTemplate();
    virtual std::string getTemplateIdentifier()const;
    virtual void applyTemplate(ScriptObjectBinder &)const;

    void build(ITickingArea const&);
    void build(ActorUniqueID const&);
    ScriptBinderActorTickingAreaTemplate();
};
