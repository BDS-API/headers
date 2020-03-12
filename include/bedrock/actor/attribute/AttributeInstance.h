#pragma once

#include "AttributeInstanceDelegate.h"
#include <string>
#include "../../../mce/UUID.h"
#include "../../../unmapped/BaseAttributeMap.h"
#include "AttributeModifier.h"
#include "AttributeBuff.h"
#include "../../../unmapped/Attribute.h"
#include <memory>
#include <vector>


class AttributeInstance {

public:
    virtual void tick();
    ~AttributeInstance();
    void _setDirty();
    void removeBuff(std::shared_ptr<AttributeBuff>);
    AttributeInstance();
    void removeBuff(AttributeBuff const&);
    void getModifiers(std::string const&)const;
    void getListeners()const;
    void resetToDefaultValue();
    void removeBuffs();
    bool hasTemporalBuffs()const;
    void setDelegate(std::shared_ptr<AttributeInstanceDelegate>);
    void recalculateModifiers();
    void getMinValue()const;
    void addBuff(std::shared_ptr<AttributeBuff>);
    void notify(long);
    void getCurrentValue()const;
    void setMinValue(float);
    void removeModifiers();
    void setRange(float, float, float);
    void addModifier(std::shared_ptr<AttributeModifier>);
    void setDefaultValueOnly(float);
    void addBuff(AttributeBuff const&);
    void getModifiers()const;
    void _sanitizeValue(float);
    void removeModifiers(std::string const&);
    void removeModifier(mce::UUID const&);
    void _calculateValue(AttributeBuff const&);
    void serializationSetRange(float, float, float);
    void addModifiers(std::vector<std::shared_ptr<AttributeModifier>> *);
    void setMaxValue(float);
    void getMaxValue()const;
    void getAttribute()const;
    void resetToMaxValue();
    void getHandle()const;
    void _calculateValue();
    void getBuffs()const;
    void getModifier(mce::UUID const&)const;
    void getModifiers(int)const;
    bool hasModifier(std::shared_ptr<AttributeModifier>)const;
    AttributeInstance(BaseAttributeMap *, Attribute const*);
    bool isValid()const;
    void addModifier(AttributeModifier const&);
    bool hasModifier(AttributeModifier const&)const;
    AttributeInstance(AttributeInstance const&);
    void _getAppliedModifiers(int);
    void removeModifier(std::shared_ptr<AttributeModifier>);
    void getDefaultValue(int)const;
    void resetToMinValue();
    void removeModifier(AttributeModifier const&);
    void serializationSetValue(float, int, float);
    void setDefaultValue(float, int);
    void registerListener(AttributeInstance const&);
};
