#pragma once

class HealthAttributeDelegate : AttributeInstanceDelegate {

    virtual ~HealthAttributeDelegate();
    virtual ~HealthAttributeDelegate();
    virtual void tick(void);
    virtual void notify(long);
    virtual void change(float, float, AttributeBuffInfo);
    virtual void getBuffValue(AttributeBuff const&)const;
}
