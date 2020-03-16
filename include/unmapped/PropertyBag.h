#pragma once

#include <string>
#include <vector>


class PropertyBag {

public:
    static long EMPTY;

    ~PropertyBag(); // _ZN11PropertyBagD2Ev
    PropertyBag(); // _ZN11PropertyBagC2Ev
    PropertyBag(Json::Value const&); // _ZN11PropertyBagC2ERKN4Json5ValueE
    PropertyBag(std::string const&); // _ZN11PropertyBagC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void clone()const; // _ZNK11PropertyBag5cloneEv
//    void set(long, long); //TODO: incomplete function definition // _ZN11PropertyBag3setEN3gsl17basic_string_spanIKcLln1EEE11buffer_spanIbE
//    void set(long, std::vector<bool> const&); //TODO: incomplete function definition // _ZN11PropertyBag3setEN3gsl17basic_string_spanIKcLln1EEERKSt6vectorIbSaIbEE
//    void set(long, long); //TODO: incomplete function definition // _ZN11PropertyBag3setEN3gsl17basic_string_spanIKcLln1EEE11buffer_spanIiE
//    void set(long, long); //TODO: incomplete function definition // _ZN11PropertyBag3setEN3gsl17basic_string_spanIKcLln1EEE11buffer_spanINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE
//    void set(long, std::vector<Json::Value> const&); //TODO: incomplete function definition // _ZN11PropertyBag3setEN3gsl17basic_string_spanIKcLln1EEERKSt6vectorIN4Json5ValueESaIS6_EE
//    bool has(long)const; //TODO: incomplete function definition // _ZNK11PropertyBag3hasEN3gsl17basic_string_spanIKcLln1EEE
    void memberCount()const; // _ZNK11PropertyBag11memberCountEv
    std::string toString()const; // _ZNK11PropertyBag8toStringB5cxx11Ev
    void toJsonValue()const; // _ZNK11PropertyBag11toJsonValueEv
    void getChangeVersion()const; // _ZNK11PropertyBag16getChangeVersionEv
    void setChangeVersion(int); // _ZN11PropertyBag16setChangeVersionEi
//    void _value(long); //TODO: incomplete function definition // _ZN11PropertyBag6_valueEN3gsl17basic_string_spanIKcLln1EEE
//    void _value(long)const; //TODO: incomplete function definition // _ZNK11PropertyBag6_valueEN3gsl17basic_string_spanIKcLln1EEE
};
