#pragma once

#include <string>
#include "../util/Vec3.h"


class CommandPropertyBag {

public:
    ~CommandPropertyBag(); // _ZN18CommandPropertyBagD2Ev
    CommandPropertyBag(); // _ZN18CommandPropertyBagC2Ev
    CommandPropertyBag(Json::Value const&); // _ZN18CommandPropertyBagC2ERKN4Json5ValueE
    void clone()const; // _ZNK18CommandPropertyBag5cloneEv
    void set(std::string const&, Json::Value const&); // _ZN18CommandPropertyBag3setERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKN4Json5ValueE
    void set(std::string const&, BlockPos const&); // _ZN18CommandPropertyBag3setERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK8BlockPos
    void set(std::string const&, Vec3); // _ZN18CommandPropertyBag3setERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE4Vec3
    void addToResultList(std::string const&, std::string const&); // _ZN18CommandPropertyBag15addToResultListERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
};
