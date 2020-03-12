#pragma once

#include <string>


class ExpandoModelElement {

public:
    ~ExpandoModelElement();
    ExpandoModelElement(ExpandoModelElement &&);
//  ExpandoModelElement(ContainerItemStack const&, ContainerExpandStatus, std::string const&); //TODO: incomplete function definition
    ExpandoModelElement(ExpandoModelElement const&);
};
