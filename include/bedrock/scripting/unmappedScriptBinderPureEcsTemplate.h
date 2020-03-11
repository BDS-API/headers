#pragma once

#include "./ScriptBinderTemplate.h"
#include "./ScriptObjectBinder.h"
#include <string>


class ScriptBinderPureEcsTemplate : ScriptBinderTemplate {

public:
    virtual ~ScriptBinderPureEcsTemplate();
    virtual std::string getTemplateIdentifier()const;
    virtual void applyTemplate(ScriptObjectBinder &)const;

//  void build(entt::Registry<unsigned int> &, unsigned int); //TODO: incomplete function definition
    ScriptBinderPureEcsTemplate();
};
