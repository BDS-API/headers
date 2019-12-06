#pragma once

class AutomationPlayerCommandOrigin : PlayerCommandOrigin {

public:
    virtual ~AutomationPlayerCommandOrigin();
    virtual void getPermissionsLevel(void)const;
    virtual void clone(void)const;
    virtual bool hasChatPerms(void)const;
    virtual bool hasTellPerms(void)const;
    virtual void getSourceId(void)const;
    virtual void getOriginType(void)const;
    virtual void toCommandOriginData(void)const;

    void AutomationPlayerCommandOrigin(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Player &);
    void AutomationPlayerCommandOrigin(ActorUniqueID, Level &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, CommandPermissionLevel, NetworkIdentifier const&);
};
