#pragma once

#include "../../actor/Actor.h"
#include "ScriptObjectBinder.h"
#include "ScriptBinderTemplate.h"


class ScriptBinderActorTemplate : ScriptBinderTemplate {

public:
    virtual std::string getTemplateIdentifier()const;
    virtual void applyTemplate(ScriptObjectBinder &)const;
    ~ScriptBinderActorTemplate();
    ScriptBinderActorTemplate();
//  void build(entt::Registry<unsigned int> &, Actor const&); //TODO: incomplete function definition
};
