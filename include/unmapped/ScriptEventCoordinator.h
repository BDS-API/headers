#pragma once

class ScriptEventCoordinator {

public:

    void sendScriptGetComponent(std::string const&, RegistrationType, bool);
    void sendScriptListenForEvent(std::string const&);
    void sendScriptBroadcastEvent(std::string const&, RegistrationType, bool);
    void sendScriptRegisterView(void);
    void sendScriptRegisterSpatialView(std::string const&);
    void sendScriptAddFilterToView(std::string const&);
    void sendScriptLoaded(std::string const&, unsigned long);
    void sendScriptRan(std::string const&, std::string const&, bool);
    void sendScriptError(std::string const&, std::string const&);
    void sendScriptInternalError(std::string const&);
    ScriptEventCoordinator(void);
};
