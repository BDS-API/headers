#pragma once

#include <string>
#include <vector>


class ScriptQueries {

public:
    ScriptQueries(); // _ZN13ScriptQueriesC2Ev
    ~ScriptQueries(); // _ZN13ScriptQueriesD2Ev
    void registerQuery(ScriptApi::ScriptVersionInfo const&, unsigned int &, std::string const&, std::string const&, std::string const&, std::string const&); // _ZN13ScriptQueries13registerQueryERKN9ScriptApi17ScriptVersionInfoERjRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESC_SC_SC_
    void registerQuery(ScriptApi::ScriptVersionInfo const&, unsigned int &); // _ZN13ScriptQueries13registerQueryERKN9ScriptApi17ScriptVersionInfoERj
//  void getEntitiesFromQuery(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, entt::Registry<unsigned int> &, unsigned int, std::vector<ScriptApi::ScriptObjectHandle> &); //TODO: incomplete function definition // _ZN13ScriptQueries20getEntitiesFromQueryERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineRN4entt8RegistryIjEEjRSt6vectorINS0_18ScriptObjectHandleESaISB_EE
//  void getEntitiesFromQuery(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, entt::Registry<unsigned int> &, unsigned int, double, double, double, double, double, double, std::vector<ScriptApi::ScriptObjectHandle> &); //TODO: incomplete function definition // _ZN13ScriptQueries20getEntitiesFromQueryERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineRN4entt8RegistryIjEEjddddddRSt6vectorINS0_18ScriptObjectHandleESaISB_EE
    void addFilter(ScriptApi::ScriptVersionInfo const&, unsigned int, std::string const&); // _ZN13ScriptQueries9addFilterERKN9ScriptApi17ScriptVersionInfoEjRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
