#pragma once

class ResourcePackDataInfoPacket : Packet {

    virtual ~ResourcePackDataInfoPacket();
    virtual ~ResourcePackDataInfoPacket();
    virtual void getId(void)const;
    virtual void _ZNK26ResourcePackDataInfoPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
