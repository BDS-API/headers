#pragma once

#include "ScriptObjectBinder.h"
#include "../../actor/ItemActor.h"
#include "ScriptBinderTemplate.h"


class ScriptBinderItemActorTemplate : ScriptBinderTemplate {

public:
    ~ScriptBinderItemActorTemplate();
    virtual std::string getTemplateIdentifier()const;
    virtual void applyTemplate(ScriptObjectBinder &)const;
    ScriptBinderItemActorTemplate();
//  void build(entt::Registry<unsigned int> &, ItemActor const&); //TODO: incomplete function definition
};
