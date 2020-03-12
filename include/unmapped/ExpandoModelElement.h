#pragma once

#include "ContainerItemStack.h"
#include <string>


class ExpandoModelElement {

public:
    ExpandoModelElement(ExpandoModelElement const&);
//  ExpandoModelElement(ContainerItemStack const&, ContainerExpandStatus, std::string const&); //TODO: incomplete function definition
    ExpandoModelElement(ExpandoModelElement &&);
    ~ExpandoModelElement();
};
