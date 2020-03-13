#pragma once



namespace RakNet {

    class SystemAddress {

    public:
        void ToInteger(RakNet::SystemAddress const&); // _ZN6RakNet13SystemAddress9ToIntegerERKS0_
        void ToString(bool, char)const; // _ZNK6RakNet13SystemAddress8ToStringEbc
        void ToString(bool, char *, char)const; // _ZNK6RakNet13SystemAddress8ToStringEbPcc
        bool EqualsExcludingPort(RakNet::SystemAddress const&)const; // _ZNK6RakNet13SystemAddress19EqualsExcludingPortERKS0_
        void GetPort()const; // _ZNK6RakNet13SystemAddress7GetPortEv
        void SetPort(unsigned short); // _ZN6RakNet13SystemAddress7SetPortEt
        void GetPortNetworkOrder()const; // _ZNK6RakNet13SystemAddress19GetPortNetworkOrderEv
        void SetPortHostOrder(unsigned short); // _ZN6RakNet13SystemAddress16SetPortHostOrderEt
        void SetPortNetworkOrder(unsigned short); // _ZN6RakNet13SystemAddress19SetPortNetworkOrderEt
        void operator==(RakNet::SystemAddress const&)const; // _ZNK6RakNet13SystemAddresseqERKS0_
        void operator!=(RakNet::SystemAddress const&)const; // _ZNK6RakNet13SystemAddressneERKS0_
        void operator>(RakNet::SystemAddress const&)const; // _ZNK6RakNet13SystemAddressgtERKS0_
        void operator<(RakNet::SystemAddress const&)const; // _ZNK6RakNet13SystemAddressltERKS0_
        void size(); // _ZN6RakNet13SystemAddress4sizeEv
        void GetIPVersion()const; // _ZNK6RakNet13SystemAddress12GetIPVersionEv
        void GetIPPROTO()const; // _ZNK6RakNet13SystemAddress10GetIPPROTOEv
        void SetToLoopback(); // _ZN6RakNet13SystemAddress13SetToLoopbackEv
        void SetToLoopback(unsigned char); // _ZN6RakNet13SystemAddress13SetToLoopbackEh
        void FromString(char const*, char, int); // _ZN6RakNet13SystemAddress10FromStringEPKcci
        bool IsLoopback()const; // _ZNK6RakNet13SystemAddress10IsLoopbackEv
        void ToString_Old(bool, char *, char)const; // _ZNK6RakNet13SystemAddress12ToString_OldEbPcc
        void ToString_New(bool, char *, char)const; // _ZNK6RakNet13SystemAddress12ToString_NewEbPcc
        SystemAddress(); // _ZN6RakNet13SystemAddressC2Ev
        SystemAddress(char const*); // _ZN6RakNet13SystemAddressC2EPKc
        SystemAddress(char const*, unsigned short); // _ZN6RakNet13SystemAddressC2EPKct
        void FromStringExplicitPort(char const*, unsigned short, int); // _ZN6RakNet13SystemAddress22FromStringExplicitPortEPKcti
        void FixForIPVersion(RakNet::SystemAddress const&); // _ZN6RakNet13SystemAddress15FixForIPVersionERKS0_
        bool IsValidIPAddress(); // _ZN6RakNet13SystemAddress16IsValidIPAddressEv
        bool IsLANAddress(); // _ZN6RakNet13SystemAddress12IsLANAddressEv
        bool IsLinkLocalAddress(); // _ZN6RakNet13SystemAddress18IsLinkLocalAddressEv
        bool IsMulticastAddress(); // _ZN6RakNet13SystemAddress18IsMulticastAddressEv
        void SetBinaryAddress(char const*, char); // _ZN6RakNet13SystemAddress16SetBinaryAddressEPKcc
        void CopyPort(RakNet::SystemAddress const&); // _ZN6RakNet13SystemAddress8CopyPortERKS0_
    };
}
