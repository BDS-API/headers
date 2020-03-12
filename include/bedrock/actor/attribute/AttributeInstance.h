#pragma once

#include <string>
#include <memory>
#include <vector>


class AttributeInstance {

public:
    ~AttributeInstance();
    virtual void tick();
    void removeBuffs();
    void setDelegate(std::shared_ptr<AttributeInstanceDelegate>);
    void addModifiers(std::vector<std::shared_ptr<AttributeModifier>> *);
    void _setDirty();
    void addBuff(std::shared_ptr<AttributeBuff>);
    void getHandle()const;
    void getAttribute()const;
    void resetToDefaultValue();
    void _getAppliedModifiers(int);
    void setRange(float, float, float);
    void registerListener(AttributeInstance const&);
    void addBuff(AttributeBuff const&);
    void setMinValue(float);
    void removeBuff(AttributeBuff const&);
    void removeModifiers(std::string const&);
    void getListeners()const;
    void getMaxValue()const;
    void notify(long);
    void serializationSetRange(float, float, float);
    void removeModifiers();
    void recalculateModifiers();
    void _calculateValue();
    void resetToMinValue();
    void serializationSetValue(float, int, float);
    void removeModifier(mce::UUID const&);
    void getBuffs()const;
    void getDefaultValue(int)const;
    AttributeInstance(BaseAttributeMap *, Attribute const*);
    void getModifier(mce::UUID const&)const;
    void setDefaultValueOnly(float);
    void getModifiers(std::string const&)const;
    void getMinValue()const;
    void getCurrentValue()const;
    void addModifier(AttributeModifier const&);
    void removeBuff(std::shared_ptr<AttributeBuff>);
    void setMaxValue(float);
    bool hasModifier(AttributeModifier const&)const;
    void getModifiers()const;
    void removeModifier(std::shared_ptr<AttributeModifier>);
    AttributeInstance();
    bool hasTemporalBuffs()const;
    bool isValid()const;
    void getModifiers(int)const;
    AttributeInstance(AttributeInstance const&);
    void addModifier(std::shared_ptr<AttributeModifier>);
    void _sanitizeValue(float);
    void _calculateValue(AttributeBuff const&);
    void setDefaultValue(float, int);
    void removeModifier(AttributeModifier const&);
    void resetToMaxValue();
    bool hasModifier(std::shared_ptr<AttributeModifier>)const;
};
