#pragma once

#include "../../../unmapped/HashedString"
#include "../../../unmapped/Attribute"


class AttributeCollection {

public:

    void instance();
    void addAttribute(HashedString const&, Attribute *);
    void getAttribute(HashedString const&);
    bool hasAttribute(HashedString const&);
    AttributeCollection(void);
};
