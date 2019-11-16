#pragma once

class AttributeInstanceDelegate {

    virtual void AttributeInstanceDelegate::~AttributeInstanceDelegate();
    virtual void AttributeInstanceDelegate::~AttributeInstanceDelegate();
    virtual void tick(void);
    virtual void notify(long);
    virtual void change(float, float, AttributeBuffInfo);
    virtual void getBuffValue(AttributeBuff const&)const;
}
