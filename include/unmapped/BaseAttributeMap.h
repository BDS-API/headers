#pragma once



class BaseAttributeMap {

public:
    static long mInvalidInstance;

    void getMutableInstance(HashedString const&);
    void onAttributeModified(AttributeInstance const&);
    void clearDirtyAttributes();
    ~BaseAttributeMap();
    void getSyncableAttributes()const;
    void getDirtyAttributes();
    void getInstance(unsigned int)const;
    BaseAttributeMap();
    void begin()const;
    void end();
    void getMutableInstance(Attribute const&);
    void getInstance(Attribute const&)const;
    void getInstance(HashedString const&)const;
    void end()const;
    void begin();
    void getMutableInstance(unsigned int);
    void registerAttribute(Attribute const&);
};
