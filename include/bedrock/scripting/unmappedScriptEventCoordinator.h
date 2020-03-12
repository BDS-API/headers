#pragma once

#include <string>


class ScriptEventCoordinator {

public:
    void sendScriptError(std::string const&, std::string const&);
    ~ScriptEventCoordinator();
    void sendScriptListenForEvent(std::string const&);
    void sendScriptLoaded(std::string const&, unsigned long);
//  void sendScriptGetComponent(std::string const&, RegistrationType, bool); //TODO: incomplete function definition
    void sendScriptAddFilterToView(std::string const&);
    void sendScriptInternalError(std::string const&);
//  void sendScriptBroadcastEvent(std::string const&, RegistrationType, bool); //TODO: incomplete function definition
    ScriptEventCoordinator();
    void sendScriptRan(std::string const&, std::string const&, bool);
    void sendScriptRegisterView();
    void sendScriptRegisterSpatialView(std::string const&);
};
