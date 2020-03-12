#pragma once



namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class Empty /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
                    virtual void New()const;
                    virtual bool IsInitialized()const;
                    virtual void GetCachedSize()const;
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    virtual void ByteSizeLong()const;
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    virtual void Clear();
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const;
                    virtual void GetMetadata()const;
                    virtual void SetCachedSize(int)const;
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition
                    ~Empty();
                    void InternalSwap(com::mojang::clacks::protocol::Empty *);
                    void default_instance();
                    void SharedDtor();
                    void MergeFrom(com::mojang::clacks::protocol::Empty const&);
                    Empty();
                    void CopyFrom(com::mojang::clacks::protocol::Empty const&);
                    void internal_default_instance();
                    void descriptor();
                    Empty(com::mojang::clacks::protocol::Empty const&);
                    void Swap(com::mojang::clacks::protocol::Empty *);
                    void SharedCtor();
                    void InitAsDefaultInstance();
                };
            }
        }
    }
}
