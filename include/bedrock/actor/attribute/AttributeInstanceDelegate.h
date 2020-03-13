#pragma once

#include "AttributeBuffInfo.h"


class AttributeInstanceDelegate {

public:
    ~AttributeInstanceDelegate(); // _ZN25AttributeInstanceDelegateD2Ev
    virtual void tick(); // _ZN25AttributeInstanceDelegate4tickEv
    virtual void notify(long); // _ZN25AttributeInstanceDelegate6notifyEl
    virtual void change(float, float, AttributeBuffInfo); // _ZN25AttributeInstanceDelegate6changeEff17AttributeBuffInfo
    virtual void getBuffValue(AttributeBuff const&)const; // _ZNK25AttributeInstanceDelegate12getBuffValueERK13AttributeBuff
    AttributeInstanceDelegate(AttributeInstance const&); // _ZN25AttributeInstanceDelegateC2ERK17AttributeInstance
    void _getInstance()const; // _ZNK25AttributeInstanceDelegate12_getInstanceEv
    void _getMutableInstance()const; // _ZNK25AttributeInstanceDelegate19_getMutableInstanceEv
};
