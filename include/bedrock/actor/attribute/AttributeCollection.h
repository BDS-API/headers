#pragma once

#include "../../../unmapped/HashedString.h"
#include "../../../unmapped/Attribute.h"


class AttributeCollection {

public:

    void instance();
    void addAttribute(HashedString const&, Attribute *);
    void getAttribute(HashedString const&);
    bool hasAttribute(HashedString const&);
    AttributeCollection();
    ~AttributeCollection();
};
