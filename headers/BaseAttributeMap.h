#pragma once

class BaseAttributeMap {

public:
    static long mInvalidInstance;


    void BaseAttributeMap(void);
    void getMutableInstance(Attribute const&);
    void getMutableInstance(unsigned int);
    void getMutableInstance(HashedString const&);
    void getInstance(Attribute const&)const;
    void getInstance(unsigned int)const;
    void getInstance(HashedString const&)const;
    void registerAttribute(Attribute const&);
    void onAttributeModified(AttributeInstance const&);
    void getDirtyAttributes(void);
    void clearDirtyAttributes(void);
    void getSyncableAttributes(void)const;
    void begin(void)const;
    void begin(void);
    void end(void)const;
    void end(void);
};
