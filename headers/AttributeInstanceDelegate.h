#pragma once

class AttributeInstanceDelegate {

public:
    virtual ~AttributeInstanceDelegate();
    virtual void tick(void);
    virtual void notify(long);
    virtual void change(float, float, AttributeBuffInfo);
    virtual void getBuffValue(AttributeBuff const&)const;

    void AttributeInstanceDelegate(AttributeInstance const&);
    void _getInstance(void)const;
    void _getMutableInstance(void)const;
};
