#pragma once

class HealthAttributeDelegate : AttributeInstanceDelegate {

    virtual void HealthAttributeDelegate::~HealthAttributeDelegate();
    virtual void HealthAttributeDelegate::~HealthAttributeDelegate();
    virtual void tick(void);
    virtual void notify(long);
    virtual void change(float, float, AttributeBuffInfo);
    virtual void getBuffValue(AttributeBuff const&)const;
}
