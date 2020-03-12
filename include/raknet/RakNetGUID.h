#pragma once



namespace RakNet {

    class RakNetGUID {

    public:
        void ToString()const;
        RakNetGUID();
        RakNetGUID(unsigned long);
        void FromString(char const*);
        void size();
        void operator>(RakNet::RakNetGUID const&)const;
        void ToString(char *)const;
        void operator!=(RakNet::RakNetGUID const&)const;
        void ToUint32(RakNet::RakNetGUID const&);
        void operator<(RakNet::RakNetGUID const&)const;
        void operator==(RakNet::RakNetGUID const&)const;
    };
}
