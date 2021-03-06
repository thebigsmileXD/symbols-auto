#pragma once

class MapCreateLockedCopyPacket : Packet {

    virtual ~MapCreateLockedCopyPacket();
    virtual ~MapCreateLockedCopyPacket();
    virtual void getId(void)const;
    virtual void _ZNK25MapCreateLockedCopyPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
