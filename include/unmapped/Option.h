#pragma once

#include <string>
#include <vector>
#include <map>
#include <functional>


class Option {

public:
    ~Option();
    virtual void load(Json::Value const&);
    virtual void load(std::map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<std::string const, std::string>>> &);
    void getVec3()const;
    void getValues()const;
    void getFloat()const;
    void set(int);
    void requestSave();
    void toggle();
    void registerObserver(void *, std::function<void (Option *)>);
    void registerTelemetryProperty(std::string const&);
    void reset();
    void read(std::string const&, bool &);
    void getInt()const;
//  void read(std::string const&, glm::tvec30<float, (glm::precision>); //TODO: incomplete function definition
//  void _setOptionType(OptionType); //TODO: incomplete function definition
    void getBool()const;
//  bool isType(OptionType)const; //TODO: incomplete function definition
    void registerObserver(void *, std::function<void (Option *)>, std::function<void (Option *, InputMode)>);
    void setRequestSaveCallback(std::function<void (bool)>);
    void getFloatMax()const;
    void getOptionResetFlags()const;
    bool canModify()const;
    std::string getTelemetryProperty()const;
//  void reset(InputMode); //TODO: incomplete function definition
    std::string getSaveTag()const;
    void notifyOptionValueChanged(bool);
    void getIntMax()const;
    void getType()const;
//  void set(InputMode, bool); //TODO: incomplete function definition
//  void notifyOptionValueChanged(InputMode, bool); //TODO: incomplete function definition
    void registerLock(void *, std::function<bool (void)>);
    bool isDefaultValue()const;
//  void getFloat(InputMode)const; //TODO: incomplete function definition
    void setDefault(bool);
    std::string getString()const;
    void unregisterObserver(void *);
//  Option(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, OptionType); //TODO: incomplete function definition
    void getFloatMin()const;
    void getID()const;
    void setCoerceSaveValueCallback(std::function<int (int)>);
    void read(std::string const&, float &);
    void getOptionOwnerType()const;
//  void set(InputMode, float); //TODO: incomplete function definition
    std::string getCaptionId()const;
    void setOverrideSource(Option *);
    bool hasOverrideSource()const;
    void registerObserver(void *, std::function<void (Option *, InputMode)>);
    void getIntMin()const;
    void setCoerceValueCallback(std::function<std::string (std::string const&)>);
//  void getBool(InputMode)const; //TODO: incomplete function definition
//  bool isDefaultValue(InputMode)const; //TODO: incomplete function definition
    void setCoerceValueCallback(std::function<bool (bool)>);
    void read(std::string const&, int &);
    void _updatePropertyVector(std::vector<std::pair<std::string, std::string>> &, std::string const&);
    std::string getValueNameMap()const;
    void unregisterLock(void *);
};
