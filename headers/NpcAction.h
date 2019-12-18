#pragma once

class NpcAction {

public:
    static long NpcAction::MAX_BUTTON_NAME_LENGTH;
    static long NpcAction::TYPE_KEY[abi:cxx11];
    static long NpcAction::DATA_KEY[abi:cxx11];
    static long NpcAction::MODE_KEY[abi:cxx11];
    static long NpcAction::TEXT_KEY[abi:cxx11];
    static long NpcAction::BUTTON_NAME_KEY[abi:cxx11];

    virtual ~NpcAction();
    virtual void fromJson(Json::Value const&);

    void NpcAction(NpcActionType);
    void getType(void)const;
    void getMode(void)const;
    void setMode(NpcActionMode);
    void setButtonName(std::string const&);
    void setText(std::string const&);
    void toJsonBase(Json::Value &);
    void read(Json::Value const&);
};
