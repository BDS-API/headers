#pragma once

#include "HashedString.h"
#include "Attribute.h"
#include "../bedrock/actor/attribute/AttributeInstance.h"


class BaseAttributeMap {

public:
    static long mInvalidInstance;

    void getDirtyAttributes();
    void end()const;
    void registerAttribute(Attribute const&);
    void onAttributeModified(AttributeInstance const&);
    void getMutableInstance(unsigned int);
    void getInstance(unsigned int)const;
    void end();
    void getInstance(HashedString const&)const;
    void clearDirtyAttributes();
    void begin();
    void getMutableInstance(Attribute const&);
    void getMutableInstance(HashedString const&);
    BaseAttributeMap();
    void getInstance(Attribute const&)const;
    void begin()const;
    ~BaseAttributeMap();
    void getSyncableAttributes()const;
};
