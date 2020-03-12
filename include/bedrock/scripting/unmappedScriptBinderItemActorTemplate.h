#pragma once

#include <string>
#include "ScriptBinderTemplate.h"


class ScriptBinderItemActorTemplate : ScriptBinderTemplate {

public:
    virtual std::string getTemplateIdentifier()const;
    virtual void applyTemplate(ScriptObjectBinder &)const;
    ~ScriptBinderItemActorTemplate();
    ScriptBinderItemActorTemplate();
//  void build(entt::Registry<unsigned int> &, ItemActor const&); //TODO: incomplete function definition
};
