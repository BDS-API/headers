#pragma once

#include "AttributeBuffInfo.h"
#include "AttributeBuff.h"
#include "AttributeInstance.h"


class AttributeInstanceDelegate {

public:
    virtual void change(float, float, AttributeBuffInfo);
    virtual void tick();
    virtual void notify(long);
    virtual void getBuffValue(AttributeBuff const&)const;
    ~AttributeInstanceDelegate();
    void _getInstance()const;
    void _getMutableInstance()const;
    AttributeInstanceDelegate(AttributeInstance const&);
};
