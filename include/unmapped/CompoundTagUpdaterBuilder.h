#pragma once

#include <string>
#include <functional>


class CompoundTagUpdaterBuilder {

public:
    void addCompound(std::string const&); // _ZN25CompoundTagUpdaterBuilder11addCompoundERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void addCompound(std::string const&); // _ZZN25CompoundTagUpdaterBuilder11addCompoundERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEENUlR21CompoundTagEditHelperE0_D2Ev
    void addCompound(std::string const&); // _ZSt7forwardIZN25CompoundTagUpdaterBuilder11addCompoundERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEUlR21CompoundTagEditHelperE_EOT_RNSt16remove_referenceISC_E4typeE
    void addCompound(std::string const&); // _ZZN25CompoundTagUpdaterBuilder11addCompoundERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEENKUlR21CompoundTagEditHelperE_clES9_
    void addCompound(std::string const&); // _ZSt11__addressofIKZN25CompoundTagUpdaterBuilder11addCompoundERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEUlR21CompoundTagEditHelperE_EPT_RSD_
    void addCompound(std::string const&)const; // _ZNKSt9_Any_data9_M_accessIZN25CompoundTagUpdaterBuilder11addCompoundERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEUlR21CompoundTagEditHelperE_EERKT_v
    void addCompound(std::string const&); // _ZNSt9_Any_data9_M_accessIPZN25CompoundTagUpdaterBuilder11addCompoundERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEUlR21CompoundTagEditHelperE_EERT_v
    void addCompound(std::string const&); // _ZNSt9_Any_data9_M_accessIZN25CompoundTagUpdaterBuilder11addCompoundERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEUlR21CompoundTagEditHelperE_EERT_v
    void addCompound(std::string const&); // _ZSt7forwardIZN25CompoundTagUpdaterBuilder11addCompoundERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEUlR21CompoundTagEditHelperE0_EOT_RNSt16remove_referenceISC_E4typeE
    void addCompound(std::string const&); // _ZZN25CompoundTagUpdaterBuilder11addCompoundERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEENUlR21CompoundTagEditHelperE0_C2EOSA_
    void addCompound(std::string const&); // _ZNSt9_Any_data9_M_accessIPZN25CompoundTagUpdaterBuilder11addCompoundERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEUlR21CompoundTagEditHelperE0_EERT_v
    void addCompound(std::string const&); // _ZZN25CompoundTagUpdaterBuilder11addCompoundERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEENKUlR21CompoundTagEditHelperE0_clES9_
    void addCompound(std::string const&)const; // _ZNKSt9_Any_data9_M_accessIPZN25CompoundTagUpdaterBuilder11addCompoundERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEUlR21CompoundTagEditHelperE0_EERKT_v
    void addCompound(std::string const&); // _ZZN25CompoundTagUpdaterBuilder11addCompoundERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEENUlR21CompoundTagEditHelperE0_C2ERKSA_
    CompoundTagUpdaterBuilder(CompoundTagUpdater &); // _ZN25CompoundTagUpdaterBuilderC2ER18CompoundTagUpdater
    void match(std::string const&, std::string); // _ZN25CompoundTagUpdaterBuilder5matchERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES5_
    void visit(std::string const&); // _ZN25CompoundTagUpdaterBuilder5visitERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void popVisit(); // _ZN25CompoundTagUpdaterBuilder8popVisitEv
    void edit(std::string const&, std::function<void (CompoundTagEditHelper &)> &&); // _ZN25CompoundTagUpdaterBuilder4editERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEOSt8functionIFvR21CompoundTagEditHelperEE
    void tryEdit(std::string const&, std::function<void (CompoundTagEditHelper &)> &&); // _ZN25CompoundTagUpdaterBuilder7tryEditERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEOSt8functionIFvR21CompoundTagEditHelperEE
    void remove(std::string const&); // _ZN25CompoundTagUpdaterBuilder6removeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void rename(std::string const&, std::string const&); // _ZN25CompoundTagUpdaterBuilder6renameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
};
