#pragma once

class ExpandoModelElement {

public:

    void ExpandoModelElement(ContainerItemStack const&, ContainerExpandStatus, std::string const&);
    void ExpandoModelElement(ExpandoModelElement&&);
    void ExpandoModelElement(ExpandoModelElement const&);
};
