#pragma once



class AttributeCollection {

public:
    ~AttributeCollection();
    void addAttribute(HashedString const&, Attribute *);
    bool hasAttribute(HashedString const&);
    void instance();
    void getAttribute(HashedString const&);
    AttributeCollection();
};
