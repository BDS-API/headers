#pragma once

class AttributeInstance {

public:
    virtual AttributeInstance::~AttributeInstance();
    virtual void tick(void);

    AttributeInstance(AttributeInstance const&);
    AttributeInstance(BaseAttributeMap *, Attribute const*);
    AttributeInstance(void);
    void getAttribute(void)const;
    void getModifiers(int)const;
    void getModifiers(void)const;
    void getModifier(mce::UUID const&)const;
    bool hasModifier(std::shared_ptr<AttributeModifier>)const;
    bool hasModifier(AttributeModifier const&)const;
    void addModifiers(std::vector<std::shared_ptr<AttributeModifier>, std::allocator<std::shared_ptr<AttributeModifier>>> *);
    void addModifier(AttributeModifier const&);
    void addModifier(std::shared_ptr<AttributeModifier>);
    void _calculateValue(void);
    void _setDirty(void);
    void removeModifier(std::shared_ptr<AttributeModifier>);
    void removeModifier(AttributeModifier const&);
    void getModifiers(std::string const&)const;
    void removeModifiers(std::string const&);
    void removeModifier(mce::UUID const&);
    void removeModifiers(void);
    void getCurrentValue(void)const;
    void recalculateModifiers(void);
    void _getAppliedModifiers(int);
    void _sanitizeValue(float);
    void _calculateValue(AttributeBuff const&);
    void getMinValue(void)const;
    void getDefaultValue(int)const;
    void getMaxValue(void)const;
    void resetToMinValue(void);
    void resetToDefaultValue(void);
    void resetToMaxValue(void);
    void setDefaultValue(float, int);
    void setDefaultValueOnly(float);
    void setRange(float, float, float);
    void serializationSetRange(float, float, float);
    void serializationSetValue(float, int, float);
    void addBuff(AttributeBuff const&);
    void addBuff(std::shared_ptr<AttributeBuff>);
    bool hasTemporalBuffs(void)const;
    void getBuffs(void)const;
    void removeBuffs(void);
    void setMaxValue(float);
    void setMinValue(float);
    void registerListener(AttributeInstance const&);
    void getHandle(void)const;
    void notify(long);
    void setDelegate(std::shared_ptr<AttributeInstanceDelegate>);
    void removeBuff(std::shared_ptr<AttributeBuff>);
    void removeBuff(AttributeBuff const&);
    void getListeners(void)const;
    bool isValid(void)const;
};
