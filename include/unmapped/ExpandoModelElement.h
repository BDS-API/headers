#pragma once

#include <string>


class ExpandoModelElement {

public:
//  ExpandoModelElement(ContainerItemStack const&, ContainerExpandStatus, std::string const&); //TODO: incomplete function definition // _ZN19ExpandoModelElementC2ERK18ContainerItemStack21ContainerExpandStatusRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    ~ExpandoModelElement(); // _ZN19ExpandoModelElementD2Ev
    ExpandoModelElement(ExpandoModelElement &&); // _ZN19ExpandoModelElementC2EOS_
    ExpandoModelElement(ExpandoModelElement const&); // _ZN19ExpandoModelElementC2ERKS_
};
