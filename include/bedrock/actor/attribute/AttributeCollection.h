#pragma once

#include "../../../unmapped/HashedString.h"
#include "../../../unmapped/Attribute.h"


class AttributeCollection {

public:
    AttributeCollection();
    void addAttribute(HashedString const&, Attribute *);
    void instance();
    void getAttribute(HashedString const&);
    ~AttributeCollection();
    bool hasAttribute(HashedString const&);
};
