#pragma once



namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class Empty /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
                    virtual void Clear();
                    ~Empty();
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    virtual void GetCachedSize()const;
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition
                    virtual void GetMetadata()const;
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const;
                    virtual bool IsInitialized()const;
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition
                    virtual void SetCachedSize(int)const;
                    virtual void ByteSizeLong()const;
                    virtual void New()const;
                    void internal_default_instance();
                    void InitAsDefaultInstance();
                    void Swap(com::mojang::clacks::protocol::Empty *);
                    void InternalSwap(com::mojang::clacks::protocol::Empty *);
                    Empty(com::mojang::clacks::protocol::Empty const&);
                    void SharedCtor();
                    void default_instance();
                    Empty();
                    void MergeFrom(com::mojang::clacks::protocol::Empty const&);
                    void CopyFrom(com::mojang::clacks::protocol::Empty const&);
                    void descriptor();
                    void SharedDtor();
                };
            }
        }
    }
}
