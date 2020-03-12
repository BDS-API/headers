#pragma once

#include <string>
#include "ScriptBinderTemplate.h"


class ScriptBinderActorTemplate : ScriptBinderTemplate {

public:
    virtual std::string getTemplateIdentifier()const;
    ~ScriptBinderActorTemplate();
    virtual void applyTemplate(ScriptObjectBinder &)const;
//  void build(entt::Registry<unsigned int> &, Actor const&); //TODO: incomplete function definition
    ScriptBinderActorTemplate();
};
