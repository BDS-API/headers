#pragma once

#include "./SystemAddress.h"


namespace RakNet {

class SystemAddress {

public:

    void ToInteger(RakNet::SystemAddress const&);
    void ToString(bool, char)const;
    void ToString(bool, char *, char)const;
    bool EqualsExcludingPort(RakNet::SystemAddress const&)const;
    void GetPort()const;
    void SetPort(unsigned short);
    void GetPortNetworkOrder()const;
    void SetPortHostOrder(unsigned short);
    void SetPortNetworkOrder(unsigned short);
    void operator==(RakNet::SystemAddress const&)const;
    void operator!=(RakNet::SystemAddress const&)const;
    void operator>(RakNet::SystemAddress const&)const;
    void operator<(RakNet::SystemAddress const&)const;
    void size();
    void GetIPVersion()const;
    void GetIPPROTO()const;
    void SetToLoopback();
    void SetToLoopback(unsigned char);
    void FromString(char const*, char, int);
    bool IsLoopback()const;
    void ToString_Old(bool, char *, char)const;
    void ToString_New(bool, char *, char)const;
    SystemAddress();
    SystemAddress(char const*);
    SystemAddress(char const*, unsigned short);
    void FromStringExplicitPort(char const*, unsigned short, int);
    void FixForIPVersion(RakNet::SystemAddress const&);
    bool IsValidIPAddress();
    bool IsLANAddress();
    bool IsLinkLocalAddress();
    bool IsMulticastAddress();
    void SetBinaryAddress(char const*, char);
    void CopyPort(RakNet::SystemAddress const&);
};

}