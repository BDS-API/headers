#pragma once

class ServerCommandOrigin : CommandOrigin {

public:
    virtual ~ServerCommandOrigin();
    virtual void getBlockPosition(void)const;
    virtual void getWorldPosition(void)const;
    virtual void getLevel(void)const;
    virtual void getDimension(void)const;
    virtual void getEntity(void)const;
    virtual void getPermissionsLevel(void)const;
    virtual void clone(void)const;
    virtual bool canUseCommandsWithoutCheatsEnabled(void)const;
    virtual bool isSelectorExpansionAllowed(void)const;
    virtual void getOriginType(void)const;

    void ServerCommandOrigin(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ServerLevel &, CommandPermissionLevel);
};
