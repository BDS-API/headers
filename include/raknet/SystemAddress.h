#pragma once



namespace RakNet {

    class SystemAddress {

    public:
        SystemAddress();
        bool IsLANAddress();
        void ToString_Old(bool, char *, char)const;
        void GetPortNetworkOrder()const;
        void operator>(RakNet::SystemAddress const&)const;
        void FixForIPVersion(RakNet::SystemAddress const&);
        void GetPort()const;
        SystemAddress(char const*, unsigned short);
        bool IsLinkLocalAddress();
        void operator==(RakNet::SystemAddress const&)const;
        void ToString_New(bool, char *, char)const;
        void GetIPPROTO()const;
        void SetPortNetworkOrder(unsigned short);
        bool EqualsExcludingPort(RakNet::SystemAddress const&)const;
        void FromString(char const*, char, int);
        void ToInteger(RakNet::SystemAddress const&);
        bool IsLoopback()const;
        SystemAddress(char const*);
        void SetToLoopback();
        void FromStringExplicitPort(char const*, unsigned short, int);
        bool IsMulticastAddress();
        void ToString(bool, char)const;
        void SetPort(unsigned short);
        void ToString(bool, char *, char)const;
        bool IsValidIPAddress();
        void operator!=(RakNet::SystemAddress const&)const;
        void SetBinaryAddress(char const*, char);
        void CopyPort(RakNet::SystemAddress const&);
        void operator<(RakNet::SystemAddress const&)const;
        void SetPortHostOrder(unsigned short);
        void size();
        void GetIPVersion()const;
        void SetToLoopback(unsigned char);
    };
}
