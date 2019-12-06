#pragma once

class CapacitorComponent : ProducerComponent {

public:
    virtual ~CapacitorComponent();
    virtual void getBaseType(void)const;
    virtual void getInstanceType(void)const;
    virtual void getPoweroutDirection(void)const;

    void CapacitorComponent(void);
};
