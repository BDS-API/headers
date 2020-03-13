#pragma once



class BaseAttributeMap {

public:
    static long mInvalidInstance;

    ~BaseAttributeMap(); // _ZN16BaseAttributeMapD2Ev
    BaseAttributeMap(); // _ZN16BaseAttributeMapC2Ev
    void getMutableInstance(Attribute const&); // _ZN16BaseAttributeMap18getMutableInstanceERK9Attribute
    void getMutableInstance(unsigned int); // _ZN16BaseAttributeMap18getMutableInstanceEj
    void getMutableInstance(HashedString const&); // _ZN16BaseAttributeMap18getMutableInstanceERK12HashedString
    void getInstance(Attribute const&)const; // _ZNK16BaseAttributeMap11getInstanceERK9Attribute
    void getInstance(unsigned int)const; // _ZNK16BaseAttributeMap11getInstanceEj
    void getInstance(HashedString const&)const; // _ZNK16BaseAttributeMap11getInstanceERK12HashedString
    void registerAttribute(Attribute const&); // _ZN16BaseAttributeMap17registerAttributeERK9Attribute
    void onAttributeModified(AttributeInstance const&); // _ZN16BaseAttributeMap19onAttributeModifiedERK17AttributeInstance
    void getDirtyAttributes(); // _ZN16BaseAttributeMap18getDirtyAttributesEv
    void clearDirtyAttributes(); // _ZN16BaseAttributeMap20clearDirtyAttributesEv
    void getSyncableAttributes()const; // _ZNK16BaseAttributeMap21getSyncableAttributesEv
    void begin()const; // _ZNK16BaseAttributeMap5beginEv
    void begin(); // _ZN16BaseAttributeMap5beginEv
    void end()const; // _ZNK16BaseAttributeMap3endEv
    void end(); // _ZN16BaseAttributeMap3endEv
};
