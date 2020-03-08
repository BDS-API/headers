#pragma once

#include "../json/Value"


class NpcAction {

public:
    static long MAX_BUTTON_NAME_LENGTH;
    static long TYPE_KEY[abi:cxx11];
    static long DATA_KEY[abi:cxx11];
    static long MODE_KEY[abi:cxx11];
    static long TEXT_KEY[abi:cxx11];
    static long BUTTON_NAME_KEY[abi:cxx11];

    virtual NpcAction::~NpcAction()
    virtual void fromJson(Json::Value const&);

    NpcAction(NpcActionType);
    void getType()const;
    void getMode()const;
    void setMode(NpcActionMode);
    void setButtonName(std::string const&);
    void setText(std::string const&);
    void toJsonBase(Json::Value &);
    void read(Json::Value const&);
};
