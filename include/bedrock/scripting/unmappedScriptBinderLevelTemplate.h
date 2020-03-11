#pragma once

#include "./ScriptBinderTemplate.h"
#include "./ScriptObjectBinder.h"
#include <string>


class ScriptBinderLevelTemplate : ScriptBinderTemplate {

public:
    virtual ~ScriptBinderLevelTemplate();
    virtual std::string getTemplateIdentifier()const;
    virtual void applyTemplate(ScriptObjectBinder &)const;

//  void build(entt::Registry<unsigned int> &, unsigned int); //TODO: incomplete function definition
    ScriptBinderLevelTemplate();
};
