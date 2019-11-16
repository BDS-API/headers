#pragma once

class AttributeBuff {

    virtual void ~AttributeBuff();
    virtual void ~AttributeBuff();
    virtual void isInstantaneous(void)const;
    virtual void isSerializable(void)const;
    virtual void setDurationAmplifier(std::shared_ptr<Amplifier>);
}
