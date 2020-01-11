#pragma once

class CapacitorComponent : ProducerComponent {

public:
    virtual CapacitorComponent::~CapacitorComponent();
    virtual void getBaseType(void)const;
    virtual void getInstanceType(void)const;
    virtual void getPoweroutDirection(void)const;

    CapacitorComponent(void);
};
