#pragma once

#include <string>


class ScriptQueryComponent {

public:
    ~ScriptQueryComponent();
//  ScriptQueryComponent(ScriptQueryComponent::ViewType, std::string const&, std::string const&, std::string const&, std::string const&); //TODO: incomplete function definition
    ScriptQueryComponent(ScriptQueryComponent &&);
//  ScriptQueryComponent(ScriptQueryComponent::ViewType); //TODO: incomplete function definition
};
