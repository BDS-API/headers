#pragma once



class CapacitorComponent : ProducerComponent {

public:
    virtual CapacitorComponent::~CapacitorComponent()
    virtual void getBaseType()const;
    virtual void getInstanceType()const;
    virtual void getPoweroutDirection()const;

    CapacitorComponent(void);
};
