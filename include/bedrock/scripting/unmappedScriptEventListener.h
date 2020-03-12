#pragma once

#include <string>


class ScriptEventListener {

public:
//  virtual void onScriptBroadcastEvent(std::string const&, RegistrationType, bool); //TODO: incomplete function definition
    virtual void onScriptLoaded(std::string const&, unsigned long);
    virtual void onScriptRan(std::string const&, std::string const&, bool);
    virtual void onScriptListenForEvent(std::string const&);
    virtual void onScriptInternalError(std::string const&);
    virtual void onScriptError(std::string const&, std::string const&);
    virtual void onScriptRegisterView();
    virtual void onScriptRegisterSpatialView(std::string const&);
//  virtual void onScriptGetComponent(std::string const&, RegistrationType, bool); //TODO: incomplete function definition
    virtual void onScriptAddFilterToView(std::string const&);
    ~ScriptEventListener();
    ScriptEventListener();
};
