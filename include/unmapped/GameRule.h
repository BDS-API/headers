#pragma once

#include <functional>
#include <string>


class GameRule {

public:
    class ValidationError;
    class Value;

    void setFloat(float, bool *, GameRule::ValidationError *);
    void setInt(int, bool *, GameRule::ValidationError *);
    void getFloat()const;
    void _setDefaultValue(int);
    GameRule(GameRule &&);
    void setBool(bool, bool *, GameRule::ValidationError *);
    void shouldSave()const;
    void _set(GameRule::Value const&, bool *, GameRule::ValidationError *);
    void _setDefaultValue(bool);
    std::string getName()const;
    void setAllowInCommand(bool);
    GameRule();
    GameRule(std::string const&, bool, bool, bool, bool);
    void setTagDataNotFoundCallback(std::function<void (GameRule &)>);
    void getBool()const;
    void setValidateValueCallback(std::function<bool (GameRule::Value const&, GameRule::ValidationError *)>);
    void getValue()const;
    void setShouldSave(bool);
    void getInt()const;
    bool hasDefaultSet()const;
    void setRequiresCheats(bool);
    GameRule(std::string const&);
    void allowUseInCommand()const;
//  void resetType(GameRule::Type); //TODO: incomplete function definition
    void compareValue(GameRule::Value const&)const;
    void setName(std::string const&);
    void getType()const;
    GameRule(GameRule const&);
    void _setDefaultValue(float);
    void tagDataNotFound();
    GameRule(std::string const&, float, bool, bool, bool);
    bool requiresCheats()const;
    GameRule(std::string const&, int, bool, bool, bool);
    ~GameRule();
    class ValidationError {

    public:
        void setDescription(std::string const&);
        std::string errorDescriptionParameters()const;
        std::string errorDescription()const;
        ValidationError();
        bool isSuccess()const;
        void setSuccess(bool);
        ~ValidationError();
    };
    class Value {

    public:
        Value();
        Value(bool);
        Value(float);
        Value(int);
    };
};
