#pragma once

#include <string>
#include <vector>


namespace Json {

    class Path {

    public:
        Path(std::string const&, Json::PathArgument const&, Json::PathArgument const&, Json::PathArgument const&, Json::PathArgument const&, Json::PathArgument const&); // _ZN4Json4PathC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_12PathArgumentESB_SB_SB_SB_
        void makePath(std::string const&, std::vector<Json::PathArgument const*> const&); // _ZN4Json4Path8makePathERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorIPKNS_12PathArgumentESaISC_EE
        ~Path(); // _ZN4Json4PathD2Ev
//      void addPathInArg(std::string const&, std::vector<Json::PathArgument const*> const&, __gnu_cxx::__normal_iterator<Json::PathArgument const**, std::vector<Json::PathArgument const*>> &, Json::PathArgument::Kind); //TODO: incomplete function definition // _ZN4Json4Path12addPathInArgERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorIPKNS_12PathArgumentESaISC_EERN9__gnu_cxx17__normal_iteratorIPKSC_SE_EENSA_4KindE
        void invalidPath(std::string const&, int); // _ZN4Json4Path11invalidPathERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
        void resolve(Json::Value const&)const; // _ZNK4Json4Path7resolveERKNS_5ValueE
        void resolve(Json::Value const&, Json::Value const&)const; // _ZNK4Json4Path7resolveERKNS_5ValueES3_
        void make(Json::Value &)const; // _ZNK4Json4Path4makeERNS_5ValueE
    };
}
