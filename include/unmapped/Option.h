#pragma once

#include <string>
#include <map>
#include "../json/Value.h"
#include <functional>
#include <vector>
#include <memory>
#include <utility>


class Option {

public:
//  virtual void load(std::map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<std::string const, std::string>>> &); //TODO: incomplete function definition
    virtual void load(Json::Value const&);
    ~Option();
//  bool isType(OptionType)const; //TODO: incomplete function definition
//  Option(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, OptionType); //TODO: incomplete function definition
    void read(std::string const&, bool &);
//  void set(InputMode, bool); //TODO: incomplete function definition
    void read(std::string const&, int &);
    void getOptionResetFlags()const;
    void getBool()const;
    void _updatePropertyVector(std::vector<std::pair<std::string, std::string>> &, std::string const&);
    void unregisterObserver(void *);
    std::string getValueNameMap()const;
    void setCoerceValueCallback(std::function<std::string (std::string const&)>);
    void getFloat()const;
    void registerLock(void *, std::function<bool (void)>);
//  void registerObserver(void *, std::function<void (Option *)>, std::function<void (Option *, InputMode)>); //TODO: incomplete function definition
    std::string getSaveTag()const;
//  void getBool(InputMode)const; //TODO: incomplete function definition
    void getIntMax()const;
//  void reset(InputMode); //TODO: incomplete function definition
    std::string getString()const;
//  void set(InputMode, float); //TODO: incomplete function definition
//  void _setOptionType(OptionType); //TODO: incomplete function definition
    void setRequestSaveCallback(std::function<void (bool)>);
    void getIntMin()const;
    void read(std::string const&, float &);
    void getFloatMin()const;
    void set(int);
    void getInt()const;
    bool canModify()const;
    void registerObserver(void *, std::function<void (Option *)>);
    void setCoerceSaveValueCallback(std::function<int (int)>);
    void registerTelemetryProperty(std::string const&);
    void setDefault(bool);
    void reset();
    void getFloatMax()const;
    void unregisterLock(void *);
//  void getFloat(InputMode)const; //TODO: incomplete function definition
//  void read(std::string const&, glm::tvec30<float, (glm::precision>); //TODO: incomplete function definition
    void getVec3()const;
    std::string getCaptionId()const;
    void notifyOptionValueChanged(bool);
    void setCoerceValueCallback(std::function<bool (bool)>);
    std::string getTelemetryProperty()const;
    void setOverrideSource(Option *);
    void toggle();
//  void notifyOptionValueChanged(InputMode, bool); //TODO: incomplete function definition
    void requestSave();
    void getOptionOwnerType()const;
    bool hasOverrideSource()const;
    void getType()const;
    void getID()const;
    bool isDefaultValue()const;
//  bool isDefaultValue(InputMode)const; //TODO: incomplete function definition
//  void registerObserver(void *, std::function<void (Option *, InputMode)>); //TODO: incomplete function definition
    void getValues()const;
};
