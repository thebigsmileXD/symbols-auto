#pragma once

class InventoryContentPacket : Packet {

    virtual ~InventoryContentPacket();
    virtual ~InventoryContentPacket();
    virtual void getId(void)const;
    virtual void _ZNK22InventoryContentPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
