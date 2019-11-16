#pragma once

class InstantaneousAttributeBuff : AttributeBuff {

    virtual ~InstantaneousAttributeBuff();
    virtual ~InstantaneousAttributeBuff();
    virtual void isInstantaneous(void)const;
    virtual void isSerializable(void)const;
    virtual void setDurationAmplifier(std::shared_ptr<Amplifier>);
}
