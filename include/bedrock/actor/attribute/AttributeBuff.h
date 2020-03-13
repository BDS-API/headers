#pragma once

#include <memory>


class AttributeBuff {

public:
    ~AttributeBuff(); // _ZN13AttributeBuffD2Ev
    virtual void setDurationAmplifier(std::shared_ptr<Amplifier>); // _ZN13AttributeBuff20setDurationAmplifierESt10shared_ptrI9AmplifierE
    AttributeBuff(AttributeBuff const&); // _ZN13AttributeBuffC2ERKS_
//  AttributeBuff(float, int, AttributeBuffType); //TODO: incomplete function definition // _ZN13AttributeBuffC2Efi17AttributeBuffType
    void getAmount()const; // _ZNK13AttributeBuff9getAmountEv
    void getType()const; // _ZNK13AttributeBuff7getTypeEv
    void getInfo()const; // _ZNK13AttributeBuff7getInfoEv
    void setValueAmplifier(std::shared_ptr<Amplifier>); // _ZN13AttributeBuff17setValueAmplifierESt10shared_ptrI9AmplifierE
    void setAmplificationAmount(int, float); // _ZN13AttributeBuff22setAmplificationAmountEif
    void setSource(Actor *); // _ZN13AttributeBuff9setSourceEP5Actor
    void getId()const; // _ZNK13AttributeBuff5getIdEv
    void setId(unsigned long); // _ZN13AttributeBuff5setIdEm
    void getOperand()const; // _ZNK13AttributeBuff10getOperandEv
    void setOperand(int); // _ZN13AttributeBuff10setOperandEi
    void operator==(AttributeBuff const&)const; // _ZNK13AttributeBuffeqERKS_
//  void buffTypeToDamageCause(AttributeBuffType); //TODO: incomplete function definition // _ZN13AttributeBuff21buffTypeToDamageCauseE17AttributeBuffType
};
