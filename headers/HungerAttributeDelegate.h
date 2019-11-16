#pragma once

class HungerAttributeDelegate : AttributeInstanceDelegate {

    virtual void ~HungerAttributeDelegate();
    virtual void ~HungerAttributeDelegate();
    virtual void tick(void);
    virtual void notify(long);
    virtual void change(float, float, AttributeBuffInfo);
    virtual void getBuffValue(AttributeBuff const&)const;
}
