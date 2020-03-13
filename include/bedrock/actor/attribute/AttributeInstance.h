#pragma once

#include <string>
#include <memory>
#include <vector>


class AttributeInstance {

public:
    ~AttributeInstance(); // _ZN17AttributeInstanceD2Ev
    virtual void tick(); // _ZN17AttributeInstance4tickEv
    AttributeInstance(AttributeInstance const&); // _ZN17AttributeInstanceC2ERKS_
    AttributeInstance(BaseAttributeMap *, Attribute const*); // _ZN17AttributeInstanceC2EP16BaseAttributeMapPK9Attribute
    AttributeInstance(); // _ZN17AttributeInstanceC2Ev
    void getAttribute()const; // _ZNK17AttributeInstance12getAttributeEv
    void getModifiers(int)const; // _ZNK17AttributeInstance12getModifiersEi
    void getModifiers()const; // _ZNK17AttributeInstance12getModifiersEv
    void getModifier(mce::UUID const&)const; // _ZNK17AttributeInstance11getModifierERKN3mce4UUIDE
    bool hasModifier(std::shared_ptr<AttributeModifier>)const; // _ZNK17AttributeInstance11hasModifierESt10shared_ptrI17AttributeModifierE
    bool hasModifier(AttributeModifier const&)const; // _ZNK17AttributeInstance11hasModifierERK17AttributeModifier
    void addModifiers(std::vector<std::shared_ptr<AttributeModifier>> *); // _ZN17AttributeInstance12addModifiersEPSt6vectorISt10shared_ptrI17AttributeModifierESaIS3_EE
    void addModifier(AttributeModifier const&); // _ZN17AttributeInstance11addModifierERK17AttributeModifier
    void addModifier(std::shared_ptr<AttributeModifier>); // _ZN17AttributeInstance11addModifierESt10shared_ptrI17AttributeModifierE
    void _calculateValue(); // _ZN17AttributeInstance15_calculateValueEv
    void _setDirty(); // _ZN17AttributeInstance9_setDirtyEv
    void removeModifier(std::shared_ptr<AttributeModifier>); // _ZN17AttributeInstance14removeModifierESt10shared_ptrI17AttributeModifierE
    void removeModifier(AttributeModifier const&); // _ZN17AttributeInstance14removeModifierERK17AttributeModifier
    void getModifiers(std::string const&)const; // _ZNK17AttributeInstance12getModifiersERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void removeModifiers(std::string const&); // _ZN17AttributeInstance15removeModifiersERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void removeModifier(mce::UUID const&); // _ZN17AttributeInstance14removeModifierERKN3mce4UUIDE
    void removeModifiers(); // _ZN17AttributeInstance15removeModifiersEv
    void getCurrentValue()const; // _ZNK17AttributeInstance15getCurrentValueEv
    void recalculateModifiers(); // _ZN17AttributeInstance20recalculateModifiersEv
    void _getAppliedModifiers(int); // _ZN17AttributeInstance20_getAppliedModifiersEi
    void _sanitizeValue(float); // _ZN17AttributeInstance14_sanitizeValueEf
    void _calculateValue(AttributeBuff const&); // _ZN17AttributeInstance15_calculateValueERK13AttributeBuff
    void getMinValue()const; // _ZNK17AttributeInstance11getMinValueEv
    void getDefaultValue(int)const; // _ZNK17AttributeInstance15getDefaultValueEi
    void getMaxValue()const; // _ZNK17AttributeInstance11getMaxValueEv
    void resetToMinValue(); // _ZN17AttributeInstance15resetToMinValueEv
    void resetToDefaultValue(); // _ZN17AttributeInstance19resetToDefaultValueEv
    void resetToMaxValue(); // _ZN17AttributeInstance15resetToMaxValueEv
    void setDefaultValue(float, int); // _ZN17AttributeInstance15setDefaultValueEfi
    void setDefaultValueOnly(float); // _ZN17AttributeInstance19setDefaultValueOnlyEf
    void setRange(float, float, float); // _ZN17AttributeInstance8setRangeEfff
    void serializationSetRange(float, float, float); // _ZN17AttributeInstance21serializationSetRangeEfff
    void serializationSetValue(float, int, float); // _ZN17AttributeInstance21serializationSetValueEfif
    void addBuff(AttributeBuff const&); // _ZN17AttributeInstance7addBuffERK13AttributeBuff
    void addBuff(std::shared_ptr<AttributeBuff>); // _ZN17AttributeInstance7addBuffESt10shared_ptrI13AttributeBuffE
    bool hasTemporalBuffs()const; // _ZNK17AttributeInstance16hasTemporalBuffsEv
    void getBuffs()const; // _ZNK17AttributeInstance8getBuffsEv
    void removeBuffs(); // _ZN17AttributeInstance11removeBuffsEv
    void setMaxValue(float); // _ZN17AttributeInstance11setMaxValueEf
    void setMinValue(float); // _ZN17AttributeInstance11setMinValueEf
    void registerListener(AttributeInstance const&); // _ZN17AttributeInstance16registerListenerERKS_
    void getHandle()const; // _ZNK17AttributeInstance9getHandleEv
    void notify(long); // _ZN17AttributeInstance6notifyEl
    void setDelegate(std::shared_ptr<AttributeInstanceDelegate>); // _ZN17AttributeInstance11setDelegateESt10shared_ptrI25AttributeInstanceDelegateE
    void removeBuff(std::shared_ptr<AttributeBuff>); // _ZN17AttributeInstance10removeBuffESt10shared_ptrI13AttributeBuffE
    void removeBuff(AttributeBuff const&); // _ZN17AttributeInstance10removeBuffERK13AttributeBuff
    void getListeners()const; // _ZNK17AttributeInstance12getListenersEv
    bool isValid()const; // _ZNK17AttributeInstance7isValidEv
};
