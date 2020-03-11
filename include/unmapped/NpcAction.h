#pragma once

#include "../json/Value.h"
#include <string>
#include "./NpcAction.h"


class NpcAction {

public:
    static long MAX_BUTTON_NAME_LENGTH;
    static std::string TYPE_KEY;
    static std::string DATA_KEY;
    static std::string MODE_KEY;
    static std::string TEXT_KEY;
    static std::string BUTTON_NAME_KEY;

    virtual ~NpcAction();
    virtual void fromJson(Json::Value const&);

//  NpcAction(NpcActionType); //TODO: incomplete function definition
    void getType()const;
    void getMode()const;
//  void setMode(NpcActionMode); //TODO: incomplete function definition
    void setButtonName(std::string const&);
    std::string getButtonName()const;
    std::string getButtonRawTextName()const;
    std::string getText()const;
    std::string getRawText()const;
    void setText(std::string const&);
    void toJsonBase(Json::Value &);
    void operator==(NpcAction const&)const;
    void operator!=(NpcAction const&)const;
    void read(Json::Value const&);
};
