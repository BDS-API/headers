#pragma once

class ScriptEventCoordinator {

public:

    void sendScriptGetComponent(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, RegistrationType, bool);
    void sendScriptListenForEvent(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void sendScriptBroadcastEvent(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, RegistrationType, bool);
    void sendScriptRegisterView(void);
    void sendScriptRegisterSpatialView(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void sendScriptAddFilterToView(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void sendScriptLoaded(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, unsigned long);
    void sendScriptRan(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool);
    void sendScriptError(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void sendScriptInternalError(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void ScriptEventCoordinator(void);
};
