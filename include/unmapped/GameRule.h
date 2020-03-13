#pragma once

#include <string>
#include <functional>


class GameRule {

public:
    class ValidationError;
    class Value;

    ~GameRule(); // _ZN8GameRuleD2Ev
    GameRule(GameRule const&); // _ZN8GameRuleC2ERKS_
    GameRule(GameRule &&); // _ZN8GameRuleC2EOS_
    GameRule(); // _ZN8GameRuleC2Ev
    GameRule(std::string const&, bool, bool, bool, bool); // _ZN8GameRuleC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEbbbb
    GameRule(std::string const&, int, bool, bool, bool); // _ZN8GameRuleC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEibbb
    GameRule(std::string const&, float, bool, bool, bool); // _ZN8GameRuleC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEfbbb
    GameRule(std::string const&); // _ZN8GameRuleC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getType()const; // _ZNK8GameRule7getTypeEv
//  void resetType(GameRule::Type); //TODO: incomplete function definition // _ZN8GameRule9resetTypeENS_4TypeE
    void _set(GameRule::Value const&, bool *, GameRule::ValidationError *); // _ZN8GameRule4_setERKNS_5ValueEPbPNS_15ValidationErrorE
    void compareValue(GameRule::Value const&)const; // _ZNK8GameRule12compareValueERKNS_5ValueE
    void getBool()const; // _ZNK8GameRule7getBoolEv
    void setBool(bool, bool *, GameRule::ValidationError *); // _ZN8GameRule7setBoolEbPbPNS_15ValidationErrorE
    void getInt()const; // _ZNK8GameRule6getIntEv
    void setInt(int, bool *, GameRule::ValidationError *); // _ZN8GameRule6setIntEiPbPNS_15ValidationErrorE
    void getFloat()const; // _ZNK8GameRule8getFloatEv
    void setFloat(float, bool *, GameRule::ValidationError *); // _ZN8GameRule8setFloatEfPbPNS_15ValidationErrorE
    void getValue()const; // _ZNK8GameRule8getValueEv
    void shouldSave()const; // _ZNK8GameRule10shouldSaveEv
    std::string getName()const; // _ZNK8GameRule7getNameB5cxx11Ev
    void allowUseInCommand()const; // _ZNK8GameRule17allowUseInCommandEv
    bool hasDefaultSet()const; // _ZNK8GameRule13hasDefaultSetEv
    bool requiresCheats()const; // _ZNK8GameRule14requiresCheatsEv
    void setName(std::string const&); // _ZN8GameRule7setNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _setDefaultValue(bool); // _ZN8GameRule16_setDefaultValueEb
    void _setDefaultValue(int); // _ZN8GameRule16_setDefaultValueEi
    void _setDefaultValue(float); // _ZN8GameRule16_setDefaultValueEf
    void setShouldSave(bool); // _ZN8GameRule13setShouldSaveEb
    void setAllowInCommand(bool); // _ZN8GameRule17setAllowInCommandEb
    void setRequiresCheats(bool); // _ZN8GameRule17setRequiresCheatsEb
    void setTagDataNotFoundCallback(std::function<void (GameRule &)>); // _ZN8GameRule26setTagDataNotFoundCallbackESt8functionIFvRS_EE
    void setValidateValueCallback(std::function<bool (GameRule::Value const&, GameRule::ValidationError *)>); // _ZN8GameRule24setValidateValueCallbackESt8functionIFbRKNS_5ValueEPNS_15ValidationErrorEEE
    void tagDataNotFound(); // _ZN8GameRule15tagDataNotFoundEv
    class ValidationError {

    public:
        void setSuccess(bool); // _ZN8GameRule15ValidationError10setSuccessEb
        void setDescription(std::string const&); // _ZN8GameRule15ValidationError14setDescriptionERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
        ValidationError(); // _ZN8GameRule15ValidationErrorC2Ev
        bool isSuccess()const; // _ZNK8GameRule15ValidationError9isSuccessEv
        std::string errorDescriptionParameters()const; // _ZNK8GameRule15ValidationError26errorDescriptionParametersB5cxx11Ev
        std::string errorDescription()const; // _ZNK8GameRule15ValidationError16errorDescriptionB5cxx11Ev
        ~ValidationError(); // _ZN8GameRule15ValidationErrorD2Ev
    };
    class Value {

    public:
        Value(); // _ZN8GameRule5ValueC2Ev
        Value(bool); // _ZN8GameRule5ValueC2Eb
        Value(int); // _ZN8GameRule5ValueC2Ei
        Value(float); // _ZN8GameRule5ValueC2Ef
    };
};
