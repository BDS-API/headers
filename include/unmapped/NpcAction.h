#pragma once

#include <string>


class NpcAction {

public:
    static long MAX_BUTTON_NAME_LENGTH;
    static std::string TYPE_KEY;
    static std::string DATA_KEY;
    static std::string MODE_KEY;
    static std::string TEXT_KEY;
    static std::string BUTTON_NAME_KEY;

    ~NpcAction(); // _ZN9NpcActionD2Ev
    virtual void fromJson(Json::Value const&); // _ZN9NpcAction8fromJsonERKN4Json5ValueE
//  NpcAction(NpcActionType); //TODO: incomplete function definition // _ZN9NpcActionC2E13NpcActionType
    void getType()const; // _ZNK9NpcAction7getTypeEv
    void getMode()const; // _ZNK9NpcAction7getModeEv
//  void setMode(NpcActionMode); //TODO: incomplete function definition // _ZN9NpcAction7setModeE13NpcActionMode
    void setButtonName(std::string const&); // _ZN9NpcAction13setButtonNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string getButtonName()const; // _ZNK9NpcAction13getButtonNameB5cxx11Ev
    std::string getButtonRawTextName()const; // _ZNK9NpcAction20getButtonRawTextNameB5cxx11Ev
    std::string getText()const; // _ZNK9NpcAction7getTextB5cxx11Ev
    std::string getRawText()const; // _ZNK9NpcAction10getRawTextB5cxx11Ev
    void setText(std::string const&); // _ZN9NpcAction7setTextERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void toJsonBase(Json::Value &); // _ZN9NpcAction10toJsonBaseERN4Json5ValueE
    void operator==(NpcAction const&)const; // _ZNK9NpcActioneqERKS_
    void operator!=(NpcAction const&)const; // _ZNK9NpcActionneERKS_
    void read(Json::Value const&); // _ZN9NpcAction4readERKN4Json5ValueE
};
