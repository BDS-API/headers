#pragma once



class ScriptQueryComponent {

public:

    ScriptQueryComponent(ScriptQueryComponent&&);
    ScriptQueryComponent(ScriptQueryComponent::ViewType, std::string const&, std::string const&, std::string const&, std::string const&);
    ScriptQueryComponent(ScriptQueryComponent::ViewType);
};
