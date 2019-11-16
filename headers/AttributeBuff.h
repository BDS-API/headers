#pragma once

class AttributeBuff {

    virtual ~AttributeBuff();
    virtual ~AttributeBuff();
    virtual void isInstantaneous(void)const;
    virtual void isSerializable(void)const;
    virtual void setDurationAmplifier(std::shared_ptr<Amplifier>);
}
