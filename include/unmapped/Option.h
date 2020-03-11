#pragma once

#include <utility>
#include <string>
#include "./Option.h"
#include "../json/Value.h"
#include <memory>
#include <vector>
#include <functional>
#include <map>


class Option {

public:
    virtual ~Option();
//  virtual void load(std::map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<std::string const, std::string>>> &); //TODO: incomplete function definition
    virtual void load(Json::Value const&);

//  Option(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, OptionType); //TODO: incomplete function definition
//  void unregisterObserver(void *); //TODO: incomplete function definition
    void registerTelemetryProperty(std::string const&);
    std::string getTelemetryProperty()const;
    std::string getCaptionId()const;
    std::string getSaveTag()const;
    void getType()const;
    void getID()const;
    void getOptionOwnerType()const;
    void setOverrideSource(Option *);
//  void registerObserver(void *, std::function<void (Option *)>, std::function<void (Option *, InputMode)>); //TODO: incomplete function definition
    bool hasOverrideSource()const;
//  void registerObserver(void *, std::function<void (Option *)>); //TODO: incomplete function definition
//  void registerObserver(void *, std::function<void (Option *, InputMode)>); //TODO: incomplete function definition
    void getFloat()const;
//  void getFloat(InputMode)const; //TODO: incomplete function definition
    void getBool()const;
//  void getBool(InputMode)const; //TODO: incomplete function definition
    void getInt()const;
    void getVec3()const;
    std::string getString()const;
    void getValues()const;
    std::string getValueNameMap()const;
    void getFloatMax()const;
    void getFloatMin()const;
    void getIntMax()const;
    void getIntMin()const;
    void set(int);
//  void set(InputMode, float); //TODO: incomplete function definition
//  void set(InputMode, bool); //TODO: incomplete function definition
    void setDefault(bool);
    void setCoerceValueCallback(std::function<std::string (std::string const&)>);
    void setCoerceValueCallback(std::function<bool (bool)>);
    void setCoerceSaveValueCallback(std::function<int (int)>);
//  void setRequestSaveCallback(std::function<void (bool)>); //TODO: incomplete function definition
    void toggle();
    void reset();
//  void reset(InputMode); //TODO: incomplete function definition
    void getOptionResetFlags()const;
    void notifyOptionValueChanged(bool);
    void requestSave();
//  void notifyOptionValueChanged(InputMode, bool); //TODO: incomplete function definition
//  bool isType(OptionType)const; //TODO: incomplete function definition
    bool isDefaultValue()const;
//  bool isDefaultValue(InputMode)const; //TODO: incomplete function definition
    bool canModify()const;
//  void registerLock(void *, std::function<bool (void)>); //TODO: incomplete function definition
//  void unregisterLock(void *); //TODO: incomplete function definition
    void read(std::string const&, float &);
    void read(std::string const&, bool &);
    void read(std::string const&, int &);
//  void read(std::string const&, glm::tvec30<float, (glm::precision>); //TODO: incomplete function definition
    void _updatePropertyVector(std::vector<std::pair<std::string, std::string>, std::allocator<std::pair<std::string, std::string>>> &, std::string const&);
//  void _setOptionType(OptionType); //TODO: incomplete function definition
};
