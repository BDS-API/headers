#pragma once

#include "./ContainerItemStack.h"
#include "./ExpandoModelElement.h"
#include <string>


class ExpandoModelElement {

public:

//  ExpandoModelElement(ContainerItemStack const&, ContainerExpandStatus, std::string const&); //TODO: incomplete function definition
    ~ExpandoModelElement();
    ExpandoModelElement(ExpandoModelElement &&);
    ExpandoModelElement(ExpandoModelElement const&);
};
