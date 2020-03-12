#pragma once



namespace RakNet {

    class SystemAddress {

    public:
        SystemAddress(char const*, unsigned short);
        SystemAddress(char const*);
        bool EqualsExcludingPort(RakNet::SystemAddress const&)const;
        bool IsLANAddress();
        void ToInteger(RakNet::SystemAddress const&);
        bool IsValidIPAddress();
        void SetPortHostOrder(unsigned short);
        void ToString_Old(bool, char *, char)const;
        void SetPortNetworkOrder(unsigned short);
        void operator!=(RakNet::SystemAddress const&)const;
        void FromStringExplicitPort(char const*, unsigned short, int);
        bool IsMulticastAddress();
        void operator>(RakNet::SystemAddress const&)const;
        void CopyPort(RakNet::SystemAddress const&);
        void FixForIPVersion(RakNet::SystemAddress const&);
        void ToString(bool, char)const;
        void SetToLoopback(unsigned char);
        void ToString(bool, char *, char)const;
        void ToString_New(bool, char *, char)const;
        void SetBinaryAddress(char const*, char);
        void SetPort(unsigned short);
        void SetToLoopback();
        void GetIPVersion()const;
        SystemAddress();
        void GetIPPROTO()const;
        void GetPortNetworkOrder()const;
        bool IsLinkLocalAddress();
        void GetPort()const;
        void size();
        void FromString(char const*, char, int);
        bool IsLoopback()const;
        void operator<(RakNet::SystemAddress const&)const;
        void operator==(RakNet::SystemAddress const&)const;
    };
}
