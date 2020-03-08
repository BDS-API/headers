#pragma once

#include "../../../unmapped/HashedString"


class AttributeCollection {

public:

    void instance(void);
    void addAttribute(HashedString const&, Attribute *);
    void getAttribute(HashedString const&);
    bool hasAttribute(HashedString const&);
    AttributeCollection(void);
};
