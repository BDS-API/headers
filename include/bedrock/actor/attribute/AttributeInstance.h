#pragma once

#include "../../../mce/UUID"
#include "../../../unmapped/Attribute"
#include "../../../unmapped/BaseAttributeMap"


class AttributeInstance {

public:
    virtual AttributeInstance::~AttributeInstance()
    virtual void tick();

    AttributeInstance(AttributeInstance const&);
    AttributeInstance(BaseAttributeMap *, Attribute const*);
    AttributeInstance(void);
    void getAttribute()const;
    void getModifiers(int)const;
    void getModifiers()const;
    void getModifier(mce::UUID const&)const;
    bool hasModifier(std::shared_ptr<AttributeModifier>)const;
    bool hasModifier(AttributeModifier const&)const;
    void addModifiers(std::vector<std::shared_ptr<AttributeModifier>, std::allocator<std::shared_ptr<AttributeModifier>>> *);
    void addModifier(AttributeModifier const&);
    void addModifier(std::shared_ptr<AttributeModifier>);
    void _calculateValue();
    void _setDirty();
    void removeModifier(std::shared_ptr<AttributeModifier>);
    void removeModifier(AttributeModifier const&);
    void getModifiers(std::string const&)const;
    void removeModifiers(std::string const&);
    void removeModifier(mce::UUID const&);
    void removeModifiers();
    void getCurrentValue()const;
    void recalculateModifiers();
    void _getAppliedModifiers(int);
    void _sanitizeValue(float);
    void _calculateValue(AttributeBuff const&);
    void getMinValue()const;
    void getDefaultValue(int)const;
    void getMaxValue()const;
    void resetToMinValue();
    void resetToDefaultValue();
    void resetToMaxValue();
    void setDefaultValue(float, int);
    void setDefaultValueOnly(float);
    void setRange(float, float, float);
    void serializationSetRange(float, float, float);
    void serializationSetValue(float, int, float);
    void addBuff(AttributeBuff const&);
    void addBuff(std::shared_ptr<AttributeBuff>);
    bool hasTemporalBuffs()const;
    void getBuffs()const;
    void removeBuffs();
    void setMaxValue(float);
    void setMinValue(float);
    void registerListener(AttributeInstance const&);
    void getHandle()const;
    void notify(long);
    void setDelegate(std::shared_ptr<AttributeInstanceDelegate>);
    void removeBuff(std::shared_ptr<AttributeBuff>);
    void removeBuff(AttributeBuff const&);
    void getListeners()const;
    bool isValid()const;
};
