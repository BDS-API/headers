#pragma once



using namespace RakNet;

class SystemAddress {

public:

    void ToInteger(RakNet::SystemAddress const&);
    void ToString(bool, char)const;
    void ToString(bool, char *, char)const;
    void EqualsExcludingPort(RakNet::SystemAddress const&)const;
    void GetPort()const;
    void SetPort(unsigned short);
    void GetPortNetworkOrder()const;
    void SetPortHostOrder(unsigned short);
    void SetPortNetworkOrder(unsigned short);
    void size();
    void GetIPVersion()const;
    void GetIPPROTO()const;
    void SetToLoopback();
    void SetToLoopback(unsigned char);
    void FromString(char const*, char, int);
    void IsLoopback()const;
    void ToString_Old(bool, char *, char)const;
    void ToString_New(bool, char *, char)const;
    SystemAddress(void);
    SystemAddress(char const*);
    SystemAddress(char const*, unsigned short);
    void FromStringExplicitPort(char const*, unsigned short, int);
    void FixForIPVersion(RakNet::SystemAddress const&);
    void IsValidIPAddress();
    void IsLANAddress();
    void IsLinkLocalAddress();
    void IsMulticastAddress();
    void SetBinaryAddress(char const*, char);
    void CopyPort(RakNet::SystemAddress const&);
};
