#pragma once

#include "../bedrock/actor/attribute/AttributeInstance.h"
#include "./Attribute.h"
#include "./HashedString.h"


class BaseAttributeMap {

public:
    static long mInvalidInstance;


    ~BaseAttributeMap();
    BaseAttributeMap();
    void getMutableInstance(Attribute const&);
    void getMutableInstance(unsigned int);
    void getMutableInstance(HashedString const&);
    void getInstance(Attribute const&)const;
    void getInstance(unsigned int)const;
    void getInstance(HashedString const&)const;
    void registerAttribute(Attribute const&);
    void onAttributeModified(AttributeInstance const&);
    void getDirtyAttributes();
    void clearDirtyAttributes();
    void getSyncableAttributes()const;
    void begin()const;
    void begin();
    void end()const;
    void end();
};
