#pragma once



class ExpandoModelElement {

public:

    ExpandoModelElement(ContainerItemStack const&, ContainerExpandStatus, std::string const&);
    ExpandoModelElement(ExpandoModelElement&&);
    ExpandoModelElement(ExpandoModelElement const&);
};
