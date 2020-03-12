#pragma once

#include <string>
#include "ScriptBinderTemplate.h"


class ScriptBinderActorTickingAreaTemplate : ScriptBinderTemplate {

public:
    virtual void applyTemplate(ScriptObjectBinder &)const;
    virtual std::string getTemplateIdentifier()const;
    ~ScriptBinderActorTickingAreaTemplate();
    ScriptBinderActorTickingAreaTemplate();
    void build(ActorUniqueID const&);
    void build(ITickingArea const&);
};
