#pragma once

#include <string>
#include <unordered_set>
#include <unordered_map>


class UIProfanityContext {

public:
    virtual ~UIProfanityContext(); // _ZN18UIProfanityContextD2Ev
    virtual void __fake_function0(); // fake
    virtual void _doMaskProfanity(std::string const&)const; // _ZNK18UIProfanityContext16_doMaskProfanityERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void _doFindProfanity(std::string const&)const; // _ZNK18UIProfanityContext16_doFindProfanityERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void createProfanityContext(std::unordered_map<std::string, int, std::hash<std::string>, long, std::allocator<std::pair<std::string const, int>>> const&, std::unordered_set<std::string, std::hash<std::string>, long, std::allocator<std::string>> const&); // _ZN18UIProfanityContext22createProfanityContextERKSt13unordered_mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4hashIS6_ESt8equal_toIS6_ESaISt4pairIKS6_iEEERKSt13unordered_setIS6_S8_SA_SaIS6_EE
    UIProfanityContext(std::unordered_map<std::string, int, std::hash<std::string>, long, std::allocator<std::pair<std::string const, int>>> const&, std::unordered_set<std::string, std::hash<std::string>, long, std::allocator<std::string>> const&); // _ZN18UIProfanityContextC2ERKSt13unordered_mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4hashIS6_ESt8equal_toIS6_ESaISt4pairIKS6_iEEERKSt13unordered_setIS6_S8_SA_SaIS6_EE
//    void setFilterMask(long); //TODO: incomplete function definition // _ZN18UIProfanityContext13setFilterMaskE22ProfanityFilterContext
//    bool isFilterActive(long)const; //TODO: incomplete function definition // _ZNK18UIProfanityContext14isFilterActiveE22ProfanityFilterContext
//    void filterProfanityFromString(long, std::string const&, bool)const; //TODO: incomplete function definition // _ZNK18UIProfanityContext25filterProfanityFromStringE22ProfanityFilterContextRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
//    void findProfanity(long, std::string const&)const; //TODO: incomplete function definition // _ZNK18UIProfanityContext13findProfanityE22ProfanityFilterContextRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
