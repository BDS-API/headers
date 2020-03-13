#pragma once

#include <string>


class ScriptEventCoordinator {

public:
//  void sendScriptGetComponent(std::string const&, RegistrationType, bool); //TODO: incomplete function definition // _ZN22ScriptEventCoordinator22sendScriptGetComponentERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE16RegistrationTypeb
    void sendScriptListenForEvent(std::string const&); // _ZN22ScriptEventCoordinator24sendScriptListenForEventERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  void sendScriptBroadcastEvent(std::string const&, RegistrationType, bool); //TODO: incomplete function definition // _ZN22ScriptEventCoordinator24sendScriptBroadcastEventERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE16RegistrationTypeb
    void sendScriptRegisterView(); // _ZN22ScriptEventCoordinator22sendScriptRegisterViewEv
    void sendScriptRegisterSpatialView(std::string const&); // _ZN22ScriptEventCoordinator29sendScriptRegisterSpatialViewERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void sendScriptAddFilterToView(std::string const&); // _ZN22ScriptEventCoordinator25sendScriptAddFilterToViewERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void sendScriptLoaded(std::string const&, unsigned long); // _ZN22ScriptEventCoordinator16sendScriptLoadedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEm
    void sendScriptRan(std::string const&, std::string const&, bool); // _ZN22ScriptEventCoordinator13sendScriptRanERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_b
    void sendScriptError(std::string const&, std::string const&); // _ZN22ScriptEventCoordinator15sendScriptErrorERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    void sendScriptInternalError(std::string const&); // _ZN22ScriptEventCoordinator23sendScriptInternalErrorERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    ~ScriptEventCoordinator(); // _ZN22ScriptEventCoordinatorD2Ev
    ScriptEventCoordinator(); // _ZN22ScriptEventCoordinatorC2Ev
};
