#pragma once

class ScriptQueryComponent {

public:

    void ScriptQueryComponent(ScriptQueryComponent&&);
    void ScriptQueryComponent(ScriptQueryComponent::ViewType, std::string const&, std::string const&, std::string const&, std::string const&);
    void ScriptQueryComponent(ScriptQueryComponent::ViewType);
};
