#pragma once



class AttributeCollection {

public:
    void instance(); // _ZN19AttributeCollection8instanceEv
    void addAttribute(HashedString const&, Attribute *); // _ZN19AttributeCollection12addAttributeERK12HashedStringP9Attribute
    void getAttribute(HashedString const&); // _ZN19AttributeCollection12getAttributeERK12HashedString
    bool hasAttribute(HashedString const&); // _ZN19AttributeCollection12hasAttributeERK12HashedString
    AttributeCollection(); // _ZN19AttributeCollectionC2Ev
    ~AttributeCollection(); // _ZN19AttributeCollectionD2Ev
};
