#pragma once



namespace RakNet {

    class RakNetGUID {

    public:
        void operator<(RakNet::RakNetGUID const&)const;
        void size();
        void operator==(RakNet::RakNetGUID const&)const;
        void ToString()const;
        void FromString(char const*);
        void operator!=(RakNet::RakNetGUID const&)const;
        void ToUint32(RakNet::RakNetGUID const&);
        RakNetGUID(unsigned long);
        RakNetGUID();
        void ToString(char *)const;
        void operator>(RakNet::RakNetGUID const&)const;
    };
}
