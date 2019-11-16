#pragma once

class ExhaustionAttributeDelegate : AttributeInstanceDelegate {

    virtual void ~ExhaustionAttributeDelegate();
    virtual void ~ExhaustionAttributeDelegate();
    virtual void tick(void);
    virtual void notify(long);
    virtual void change(float, float, AttributeBuffInfo);
    virtual void getBuffValue(AttributeBuff const&)const;
}
