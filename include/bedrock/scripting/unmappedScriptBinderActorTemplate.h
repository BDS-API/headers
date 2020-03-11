#pragma once

#include "./ScriptBinderTemplate.h"
#include <string>
#include "./ScriptObjectBinder.h"
#include "../../actor/Actor.h"


class ScriptBinderActorTemplate : ScriptBinderTemplate {

public:
    virtual ~ScriptBinderActorTemplate();
    virtual std::string getTemplateIdentifier()const;
    virtual void applyTemplate(ScriptObjectBinder &)const;

//  void build(entt::Registry<unsigned int> &, Actor const&); //TODO: incomplete function definition
    ScriptBinderActorTemplate();
};
