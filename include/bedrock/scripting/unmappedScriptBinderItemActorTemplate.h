#pragma once

#include "./ScriptBinderTemplate.h"
#include <string>
#include "./ScriptObjectBinder.h"
#include "../../actor/ItemActor.h"


class ScriptBinderItemActorTemplate : ScriptBinderTemplate {

public:
    virtual ~ScriptBinderItemActorTemplate();
    virtual std::string getTemplateIdentifier()const;
    virtual void applyTemplate(ScriptObjectBinder &)const;

//  void build(entt::Registry<unsigned int> &, ItemActor const&); //TODO: incomplete function definition
    ScriptBinderItemActorTemplate();
};
