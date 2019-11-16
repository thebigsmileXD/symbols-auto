#pragma once

class ResourcePackClientResponsePacket : Packet {

    virtual ~ResourcePackClientResponsePacket();
    virtual ~ResourcePackClientResponsePacket();
    virtual void getId(void)const;
    virtual void _ZNK32ResourcePackClientResponsePacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
