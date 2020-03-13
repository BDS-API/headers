#pragma once

#include <string>
#include "ScriptBinderTemplate.h"


class ScriptBinderActorTickingAreaTemplate : ScriptBinderTemplate {

public:
    ~ScriptBinderActorTickingAreaTemplate(); // _ZN36ScriptBinderActorTickingAreaTemplateD2Ev
    virtual std::string getTemplateIdentifier()const; // _ZNK36ScriptBinderActorTickingAreaTemplate21getTemplateIdentifierB5cxx11Ev
    virtual void applyTemplate(ScriptObjectBinder &)const; // _ZNK36ScriptBinderActorTickingAreaTemplate13applyTemplateER18ScriptObjectBinder
    void build(ITickingArea const&); // _ZN36ScriptBinderActorTickingAreaTemplate5buildERK12ITickingArea
    void build(ActorUniqueID const&); // _ZN36ScriptBinderActorTickingAreaTemplate5buildERK13ActorUniqueID
    ScriptBinderActorTickingAreaTemplate(); // _ZN36ScriptBinderActorTickingAreaTemplateC2Ev
};
