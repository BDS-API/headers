#pragma once

class ScriptQueries {

public:

    void ScriptQueries(void);
    void registerQuery(ScriptApi::ScriptVersionInfo const&, unsigned int &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void registerQuery(ScriptApi::ScriptVersionInfo const&, unsigned int &);
    void getEntitiesFromQuery(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, entt::Registry<unsigned int> &, unsigned int, std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> &);
    void getEntitiesFromQuery(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, entt::Registry<unsigned int> &, unsigned int, double, double, double, double, double, double, std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> &);
    void addFilter(ScriptApi::ScriptVersionInfo const&, unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
};
