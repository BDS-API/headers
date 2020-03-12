#pragma once

#include "AttributeBuffInfo.h"


class AttributeInstanceDelegate {

public:
    virtual void getBuffValue(AttributeBuff const&)const;
    virtual void notify(long);
    virtual void tick();
    ~AttributeInstanceDelegate();
    virtual void change(float, float, AttributeBuffInfo);
    void _getMutableInstance()const;
    void _getInstance()const;
    AttributeInstanceDelegate(AttributeInstance const&);
};
