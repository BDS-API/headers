#pragma once

#include <string>
#include "ScriptBinderTemplate.h"


class ScriptBinderPureEcsTemplate : ScriptBinderTemplate {

public:
    virtual std::string getTemplateIdentifier()const;
    virtual void applyTemplate(ScriptObjectBinder &)const;
    ~ScriptBinderPureEcsTemplate();
    ScriptBinderPureEcsTemplate();
//  void build(entt::Registry<unsigned int> &, unsigned int); //TODO: incomplete function definition
};
