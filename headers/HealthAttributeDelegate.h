#pragma once

class HealthAttributeDelegate : AttributeInstanceDelegate {

public:
    virtual ~HealthAttributeDelegate();
    virtual void tick(void);
    virtual void change(float, float, AttributeBuffInfo);
    virtual void getBuffValue(AttributeBuff const&)const;

    void HealthAttributeDelegate(AttributeInstance const&, Mob *);
};
