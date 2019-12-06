#pragma once

class Option {

public:
    virtual ~Option();
    virtual void load(std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>>> &);
    virtual void load(Json::Value const&);

    void Option(OptionID, OptionOwnerType, OptionResetFlags, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, OptionType);
    void unregisterObserver(void *);
    void registerTelemetryProperty(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void getType(void)const;
    void getID(void)const;
    void getOptionOwnerType(void)const;
    void setOverrideSource(Option*);
    void registerObserver(void *, std::function<void ()(Option*)>, std::function<void ()(Option*, InputMode)>);
    bool hasOverrideSource(void)const;
    void registerObserver(void *, std::function<void ()(Option*)>);
    void registerObserver(void *, std::function<void ()(Option*, InputMode)>);
    void getFloat(void)const;
    void getFloat(InputMode)const;
    void getBool(void)const;
    void getBool(InputMode)const;
    void getInt(void)const;
    void getVec3(void)const;
    void getValues(void)const;
    void getFloatMax(void)const;
    void getFloatMin(void)const;
    void getIntMax(void)const;
    void getIntMin(void)const;
    void set(int);
    void set(InputMode, float);
    void set(InputMode, bool);
    void setDefault(bool);
    void setCoerceValueCallback(std::function<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> ()(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)>);
    void setCoerceValueCallback(std::function<bool ()(bool)>);
    void setCoerceSaveValueCallback(std::function<int ()(int)>);
    void setRequestSaveCallback(std::function<void ()(bool)>);
    void toggle(void);
    void reset(void);
    void reset(InputMode);
    void getOptionResetFlags(void)const;
    void notifyOptionValueChanged(bool);
    void requestSave(void);
    void notifyOptionValueChanged(InputMode, bool);
    bool isType(OptionType)const;
    bool isDefaultValue(void)const;
    bool isDefaultValue(InputMode)const;
    bool canModify(void)const;
    void registerLock(void *, std::function<bool ()(void)>);
    void unregisterLock(void *);
    void read(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, float &);
    void read(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool &);
    void read(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int &);
    void read(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, glm::tvec3<float, (glm::precision)0> &);
    void _updatePropertyVector(std::vector<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>>> &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void _setOptionType(OptionType);
};
