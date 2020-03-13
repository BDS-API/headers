#pragma once

#include <map>
#include <functional>
#include <vector>
#include <string>


class Option {

public:
    ~Option(); // _ZN6OptionD2Ev
    virtual void load(std::map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<std::string const, std::string>>> &); // _ZN6Option4loadERSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6_St4lessIS6_ESaISt4pairIKS6_S6_EEE
    virtual void load(Json::Value const&); // _ZN6Option4loadERKN4Json5ValueE
//  Option(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, OptionType); //TODO: incomplete function definition // _ZN6OptionC2E8OptionID15OptionOwnerType16OptionResetFlagsRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESA_10OptionType
    void unregisterObserver(void *); // _ZN6Option18unregisterObserverEPv
    void registerTelemetryProperty(std::string const&); // _ZN6Option25registerTelemetryPropertyERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string getTelemetryProperty()const; // _ZNK6Option20getTelemetryPropertyB5cxx11Ev
    std::string getCaptionId()const; // _ZNK6Option12getCaptionIdB5cxx11Ev
    std::string getSaveTag()const; // _ZNK6Option10getSaveTagB5cxx11Ev
    void getType()const; // _ZNK6Option7getTypeEv
    void getID()const; // _ZNK6Option5getIDEv
    void getOptionOwnerType()const; // _ZNK6Option18getOptionOwnerTypeEv
    void setOverrideSource(Option *); // _ZN6Option17setOverrideSourceEPS_
    void registerObserver(void *, std::function<void (Option *)>, std::function<void (Option *, InputMode)>); // _ZN6Option16registerObserverEPvSt8functionIFvPS_EES1_IFvS2_9InputModeEE
    bool hasOverrideSource()const; // _ZNK6Option17hasOverrideSourceEv
    void registerObserver(void *, std::function<void (Option *)>); // _ZN6Option16registerObserverEPvSt8functionIFvPS_EE
    void registerObserver(void *, std::function<void (Option *, InputMode)>); // _ZN6Option16registerObserverEPvSt8functionIFvPS_9InputModeEE
    void getFloat()const; // _ZNK6Option8getFloatEv
//  void getFloat(InputMode)const; //TODO: incomplete function definition // _ZNK6Option8getFloatE9InputMode
    void getBool()const; // _ZNK6Option7getBoolEv
//  void getBool(InputMode)const; //TODO: incomplete function definition // _ZNK6Option7getBoolE9InputMode
    void getInt()const; // _ZNK6Option6getIntEv
    void getVec3()const; // _ZNK6Option7getVec3Ev
    std::string getString()const; // _ZNK6Option9getStringB5cxx11Ev
    void getValues()const; // _ZNK6Option9getValuesEv
    std::string getValueNameMap()const; // _ZNK6Option15getValueNameMapB5cxx11Ev
    void getFloatMax()const; // _ZNK6Option11getFloatMaxEv
    void getFloatMin()const; // _ZNK6Option11getFloatMinEv
    void getIntMax()const; // _ZNK6Option9getIntMaxEv
    void getIntMin()const; // _ZNK6Option9getIntMinEv
    void set(int); // _ZN6Option3setEi
//  void set(InputMode, float); //TODO: incomplete function definition // _ZN6Option3setE9InputModef
//  void set(InputMode, bool); //TODO: incomplete function definition // _ZN6Option3setE9InputModeb
    void setDefault(bool); // _ZN6Option10setDefaultEb
    void setCoerceValueCallback(std::function<std::string (std::string const&)>); // _ZN6Option22setCoerceValueCallbackESt8functionIFNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKS6_EE
    void setCoerceValueCallback(std::function<bool (bool)>); // _ZN6Option22setCoerceValueCallbackESt8functionIFbbEE
    void setCoerceSaveValueCallback(std::function<int (int)>); // _ZN6Option26setCoerceSaveValueCallbackESt8functionIFiiEE
    void setRequestSaveCallback(std::function<void (bool)>); // _ZN6Option22setRequestSaveCallbackESt8functionIFvbEE
    void toggle(); // _ZN6Option6toggleEv
    void reset(); // _ZN6Option5resetEv
//  void reset(InputMode); //TODO: incomplete function definition // _ZN6Option5resetE9InputMode
    void getOptionResetFlags()const; // _ZNK6Option19getOptionResetFlagsEv
    void notifyOptionValueChanged(bool); // _ZN6Option24notifyOptionValueChangedEb
    void requestSave(); // _ZN6Option11requestSaveEv
//  void notifyOptionValueChanged(InputMode, bool); //TODO: incomplete function definition // _ZN6Option24notifyOptionValueChangedE9InputModeb
//  bool isType(OptionType)const; //TODO: incomplete function definition // _ZNK6Option6isTypeE10OptionType
    bool isDefaultValue()const; // _ZNK6Option14isDefaultValueEv
//  bool isDefaultValue(InputMode)const; //TODO: incomplete function definition // _ZNK6Option14isDefaultValueE9InputMode
    bool canModify()const; // _ZNK6Option9canModifyEv
    void registerLock(void *, std::function<bool (void)>); // _ZN6Option12registerLockEPvSt8functionIFbvEE
    void unregisterLock(void *); // _ZN6Option14unregisterLockEPv
    void read(std::string const&, float &); // _ZN6Option4readERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERf
    void read(std::string const&, bool &); // _ZN6Option4readERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERb
    void read(std::string const&, int &); // _ZN6Option4readERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERi
//  void read(std::string const&, glm::tvec30<float, (glm::precision>); //TODO: incomplete function definition // _ZN6Option4readERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERN3glm5tvec3IfLNS8_9precisionE0EEE
    void _updatePropertyVector(std::vector<std::pair<std::string, std::string>> &, std::string const&); // _ZN6Option21_updatePropertyVectorERSt6vectorISt4pairINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_ESaIS8_EERKS7_
//  void _setOptionType(OptionType); //TODO: incomplete function definition // _ZN6Option14_setOptionTypeE10OptionType
};
