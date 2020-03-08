#pragma once

#include "../json/Value"


class Option {

public:
    virtual Option::~Option()
    virtual void load(std::map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<std::string const, std::string>>> &);
    virtual void load(Json::Value const&);

    Option(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, OptionType);
    void unregisterObserver(void *);
    void registerTelemetryProperty(std::string const&);
    void getType()const;
    void getID()const;
    void getOptionOwnerType()const;
    void setOverrideSource(Option*);
    void registerObserver(void *, std::function<void ()(Option*)>, std::function<void ()(Option*, InputMode)>);
    bool hasOverrideSource()const;
    void registerObserver(void *, std::function<void ()(Option*)>);
    void registerObserver(void *, std::function<void ()(Option*, InputMode)>);
    void getFloat()const;
    void getFloat(InputMode)const;
    void getBool()const;
    void getBool(InputMode)const;
    void getInt()const;
    void getVec3()const;
    void getValues()const;
    void getFloatMax()const;
    void getFloatMin()const;
    void getIntMax()const;
    void getIntMin()const;
    void set(int);
    void set(InputMode, float);
    void set(InputMode, bool);
    void setDefault(bool);
    void setCoerceValueCallback(std::function<std::string ()(std::string const&)>);
    void setCoerceValueCallback(std::function<bool ()(bool)>);
    void setCoerceSaveValueCallback(std::function<int ()(int)>);
    void setRequestSaveCallback(std::function<void ()(bool)>);
    void toggle();
    void reset();
    void reset(InputMode);
    void getOptionResetFlags()const;
    void notifyOptionValueChanged(bool);
    void requestSave();
    void notifyOptionValueChanged(InputMode, bool);
    bool isType(OptionType)const;
    bool isDefaultValue()const;
    bool isDefaultValue(InputMode)const;
    bool canModify()const;
    void registerLock(void *, std::function<bool ()(void)>);
    void unregisterLock(void *);
    void read(std::string const&, float &);
    void read(std::string const&, bool &);
    void read(std::string const&, int &);
    void read(std::string const&, glm::tvec30<float, (glm::precision>);
    void _updatePropertyVector(std::vector<std::pair<std::string, std::string>, std::allocator<std::pair<std::string, std::string>>> &, std::string const&);
    void _setOptionType(OptionType);
};
