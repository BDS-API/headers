#pragma once

#include <string>


class ScriptEventCoordinator {

public:
    void sendScriptRegisterView();
    void sendScriptLoaded(std::string const&, unsigned long);
    ~ScriptEventCoordinator();
    void sendScriptAddFilterToView(std::string const&);
    void sendScriptInternalError(std::string const&);
    void sendScriptListenForEvent(std::string const&);
    void sendScriptRegisterSpatialView(std::string const&);
//  void sendScriptBroadcastEvent(std::string const&, RegistrationType, bool); //TODO: incomplete function definition
    ScriptEventCoordinator();
    void sendScriptRan(std::string const&, std::string const&, bool);
//  void sendScriptGetComponent(std::string const&, RegistrationType, bool); //TODO: incomplete function definition
    void sendScriptError(std::string const&, std::string const&);
};
